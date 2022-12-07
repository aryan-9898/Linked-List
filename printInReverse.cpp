void reversePrint(SinglyLinkedListNode* llist) {
    
    SinglyLinkedListNode* prev=NULL;
    SinglyLinkedListNode* curr=llist;
    SinglyLinkedListNode* forward=NULL;
    
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        
        prev=curr;
        curr=forward;
        
        
    }
    
    
    while(prev!=NULL){
        cout<<prev->data<<endl;
        prev=prev->next;
    }
}
