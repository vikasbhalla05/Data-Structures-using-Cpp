// appending last k nodes to the front of the list

int length(node* head){
    // calculating the length of linked list to find the kthe position
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
node* kAppend(node* &head,int k){
    
    node* newTail;
    node* newHead;
    node* tail=head;
    
    int l=length(head);
    int count=1;
    k=k%l;
    while(tail->next!=NULL){
        if(count==l-k){
            newTail=tail;
        }
        if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++
    }
    newTail->next=NULL;
    tail->next=head;
    
    return newHead;
}

int main(){
    // making a linked list from an array
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head,arr[i]);
    }
    display(head);
    head=kAppend(head,3);
    display(head);
    
    return 0
}
