// insertion deletion and display in a circular linked list

void insertAtTail(node* &head, int val){
    
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    
    while(temp->next!==head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void insertAtHead(node* &head,int val){
    
    node*n=new node(val);
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    
    head=n;
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
}

void display(node* &head){
    node* temp=head;
    
    do{
        cout<<temp->data<<" ";
    }while(temp!=head)
    
    cout<<endl;
}

//deletion

void deletion(node* &head,int pos){
    
    if(pos==1){
        delAtHead(head);
        return;
    }
    
    node* temp=head;
    int count=1;
    
    while(temp->next!=head && count<pos){
        temp=temp->next;
    }
    node* toDel=temp->next;
    temp->next=temp->next->next;
    
    delete toDel;
}

void delAtHead(node* &head){
    
    node* temp=head;
    
    while(temp->next!=head){
        temp=temp->next;
    }
    node* toDel=head;
    temp->next=head->next;
    head=head->next;
    delete toDel;
}
