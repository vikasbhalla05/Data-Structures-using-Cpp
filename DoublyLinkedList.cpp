// doubly linked list inserting and deletion

#include<iostream>
using namespace std;
// class construct for node
class node{
    public:
    int data;
    node* prev;
    node* next;
    
    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};
// inserting the element node at head
void putAtHead(node* &head,int val){
    
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    
    head=n;
}
//inserting the element node at tail
void putAtTail(node* &head,int val){
    
    node* n=new node(val);
    if(head==NULL){
        putAtHead(head,val);
        return;
    }
    node* temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
//display the linked list
void display(node* head){
    
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
// to delete the node from head
void toDel(node* &head){
    node* todel=head;
    head=head->next;
    head->prev=NULL;
    
    delete todel;
}
// to delete a node
void deletion(node* &head,int pos){
    
    if(pos==1){
        toDel(head);
        return;
    }
    
    node* temp=head;
    int count=1;
    
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
    
    delete temp;
}

int main(){
    
    node* head=NULL;
    putAtTail(head,1);
    putAtTail(head,2);
    putAtTail(head,3);
    putAtTail(head,4);
    display(head);
    putAtHead(head,5);
    display(head);
    deletion(head,5);
    display(head);
    return 0;
}
