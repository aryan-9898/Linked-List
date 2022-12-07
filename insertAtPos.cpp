SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    
    SinglyLinkedListNode* temp=llist;
    int cnt=0;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    
    SinglyLinkedListNode* new_node=new SinglyLinkedListNode(data);
    new_node->next=temp->next;
    temp->next=new_node;
    
    return llist;

}
