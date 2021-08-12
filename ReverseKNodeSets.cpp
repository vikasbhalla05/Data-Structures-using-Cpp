node* reverseK(node* head,int k){
    //initializing 3 var prev curr and next for iterating and reversing the nodes
    node* prev=NULL;
    node* curr=head;
    node* next;
    //reversing block
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    // connecting the first element with the k+1th element
    if(next!=NULL){
        head->next=reverseK(next,k);
        //recursive call for reversing the set if k nodes in remaining list
    }
    //returning the head pointer of the reversed linked list
    // from every recursion the prev pointer points to the first element
    return prev;
}
