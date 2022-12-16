SinglyLinkedListNode*  solve(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2){
    
    if(head1->next==NULL){
        head1->next=head2;
        return head1;
    }
    SinglyLinkedListNode* curr1=head1;
    SinglyLinkedListNode* next1=curr1->next;
    SinglyLinkedListNode* curr2=head2;
    SinglyLinkedListNode* next2=curr2->next;
    
    while(next1!=NULL && curr2!=NULL){
        if( (curr2->data>=curr1->data)&& (curr2->data<=next1->data) ){
            curr1->next=curr2;
            next2=curr2->next;
            curr2->next=next1;
            
            curr1=curr2;
            curr2=next2;
            
        }
        else{
            curr1=next1;
            next1=next1->next;
            
            if(next1==NULL){
                curr1->next=curr2;
                return head1;
            }
        }
    }
    return head1;
 }
 
 
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
    if(head1->data<=head2->data){
       return solve(head1,head2);
    }
    else{
       return solve(head2,head1);
    }
    
    


}
