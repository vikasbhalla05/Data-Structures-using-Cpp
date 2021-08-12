// Iterative approach using 3 pointers as prev,curr and noexcept
// loop as
node* Irev(node* &head){
    
    node* prev=NULL;
    node* curr=head;
    node* next;
    
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

// recursive way
node* Rrev(node* &head){
    
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    node* newHead=Rrev(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return newHead;
}
