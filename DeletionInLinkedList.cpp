// to delete the nth node
// put (n-1)th temp = nth temp

void deleteAtHead(node* &head){
  node* todelete=head;
  head= head->next;
  
  delete todelete;
}

void deleteNode( node* &head, int val){
  node* temp=head;
  
  while(temp->next->data!=val)
  {
    temp=temp->next;
  }
  
  node* todelete=temp->next;
  temp->next =temp->next->next;
  delete todelete;
  
  if(head==NULL){
    return;
  }
  if(head->next==NULL && head->data==val){
    deleteAtHead(head);
    return 0;
  }
}
