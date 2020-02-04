#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
}*START=NULL, *END=START;

void add(int value){
    struct node *ptr=new struct node;
    ptr->data=value;
    ptr->next=NULL;
    if(START==NULL){
        START=ptr;
        END=ptr;
    } else{
        END->next=ptr;
        END=ptr;
    }
    
}

void display(struct node *head){
    if(START==NULL){
        cout<<"List is empty";
    } else{
        struct node *ptr= START;
        while(cout<<ptr->data<<" " && ptr->next!=NULL){
            ptr=ptr->next;
        }
    }
}

int main(void){
    int choice;
    do{
        cout<<"1. Insert new elemnt"<<"\n";
        cout<<"2. Display List"<<"\n";
        cout<<"3. Delete Last Element"<<"\n";
        cout<<"4. Exit"<<"\n";
        cout<<"Choose from Menu->";
        cin>>choice;

        switch (choice){
            int value;
        case 1:
        cout<<"Enter the value->";cin>>value;
        add(value);
            break;
        
        case 2:
        display(START);
            break;
        
        default:
            break;
        }
    }while(choice>0&&choice<4);
    return 0;
}
