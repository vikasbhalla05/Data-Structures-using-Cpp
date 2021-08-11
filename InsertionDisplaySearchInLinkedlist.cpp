#include <iostream>
using namespace std;
//defining class node to containg the definition of node data type
class node{
    public:
        int data;
        node* next;
        
        node(int val){
            data=val;
            next=NULL;
        }
};

void AddAtHead(node* &head,int val){
    
    node* n=new node(val);
    n->next=head;
    head=n;
}

void AddAtTail(node* &head,int val){
  //passing head by reference because we need to make change in the current list
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void search(node* head,int key){
  //passing head by value because we don't need to change the current list
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            cout<<"found"<<endl;
            return;
        }
        temp=temp->next;
    }
    cout<<"Not found"<<endl;
}
int main()
{
    node* head=NULL;
    
    AddAtTail(head,1);
    AddAtTail(head,2);
    AddAtTail(head,3);
    display(head);
    AddAtHead(head,4);
    display(head);
    search(head,5);
    
    return 0;
}
