SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* temp=llist;
    if(llist==NULL){
        return NULL;
    }
    
    while(temp!=NULL){
        if((temp->next!=NULL) && temp->data==temp->next->data){
            SinglyLinkedListNode* next_next=temp->next->next;
            SinglyLinkedListNode* nodeToDel=temp->next;
            delete(nodeToDel);
            temp->next=next_next;
        }
        else{
            temp=temp->next;
        }
    }
    
    return llist;
}
