// merge 2 sorted linked list  iterative method

node* merge(node* &head1, node* head2){
    
    node* ptr1=head1;// pointer for the ll1 iteration
    node* ptr2=head2;// pointer for the ll2 iteration
    node* DN=new node(-1);// Dummy node for the result
    node* ptr3=DN;// pointer for dummy node
    
    while(ptr1!=NULL && ptr2!=NULL){
        // Adding the smallest first to the resultant linkedlist
        if(ptr2->data>ptr1->data){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    while(ptr1!=NULL){
        ptr3->next=ptr1;
        ptr1=ptr2->next;
        ptr3=ptr3->next;
    }
    while(ptr2!=NULL){
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return DN->next;
}

// recursive method
node* recMerge(node* head1,node* head2){
    
    if(head1==NULL){
        return head2;
    }
    else(head2==NULL){
        return head1;
    }
    
    node* result;
    while(head1!=NULL && head2!=NULL){
        
        if(head1->data<head->data){
            result=head1;
            result->next=recMerge(head1->next,head2);
        }
        else{
            result=head2;
            result->next=recMerge(head1,head2->next);
        }
    }
}
