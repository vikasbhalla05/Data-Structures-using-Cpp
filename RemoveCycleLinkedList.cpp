// remove a cycle
// make the fast pointer as head then increment both the fast and slow
// by 1 until both point to the same node, then point the slow to NULL

void remCycle(node* &head){
    
    node* fast=head;
    node* slow=head;
    
    do{
        fast=fast->next->next;
        slow=slow->next;
    }while(fast!=slow)
    
    fast=head;
    
    while(fast->next!=slow->next){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
}
