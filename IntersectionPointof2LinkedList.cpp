int inter(node* head1,node* head2){
    
    int l1=length(head1);
    int l2=length(head2);//making length function for length
    int d=0;
    
    node* ptr1;
    node* ptr2;
    
    if(l1>l2){
        ptr1=head1;
        ptr2=head2;
    }
    else{
        ptr2=head1;
        ptr1=head2;
    }
    while(d>0){
        d--;
        if(ptr1->next==NULL){
            return -1;
        }
        ptr1=ptr->next;
    }
    
    while(ptr1!=NULL && ptr2!=NULL){
        
        if(ptr1==ptr2){
            return prt1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}

// creating an array to intersect

void intersect(node* &head1,node* &head2,int pos){
    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp->next;
    }
    temp2->next=temp1;
}
