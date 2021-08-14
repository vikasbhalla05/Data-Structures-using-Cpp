// put even position nodes after odd position nodes in a linked list

void EvenOdd(node* &head,){
    
    node* odd=head;
    node* even=head->next;
    node* evenStart=even;
    
    while(odd->next!=NULL && even->next!=NULL){
        
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenStart;
    if(odd->next==NULL){
        even->next=NULL;
    }
}
