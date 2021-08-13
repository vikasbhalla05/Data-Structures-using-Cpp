// Making a cycle in linked list at position incrementing temp and storing 
// its value at reacing position position

node* makeCycle(node* &head,int pos){
    node* temp=head;
    node* sNode; //node at position pos
    
    int count=1;
    while(temp->next!=NULL){
        
        if(count==pos){
            sNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=sNode;
}

//Detecting a cycle in linked list
// Floyd's Algorith or (hare and tortoise) Algorith
//making 2 pointers fast and slow run from head with speed 2 and 1
//if both collide at a node there is cycle present

bool detCycle(node* head){
    //hare and tortiose node pointers
    node* fast=head;
    node* slow=head;
    
    while(fast!=NULL && fast->next!=NULL){
        
        fast=fast->next->next;
        slow=slow->next
        
        if(fast==slow){
            return true;// point of singularity
        }
    }
    return false;
}
