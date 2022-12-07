int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    SinglyLinkedListNode* current = llist;
    SinglyLinkedListNode* result = llist;
    int index=0;
    while(current!=NULL)
    {
        current=current->next;
        if (index++>positionFromTail)
        {
            result=result->next;
        }
    }
    return result->data;

}
