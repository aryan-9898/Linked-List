 public:
    void insert(Node* &tail,Node* curr){          //I stuck by passing curr by reference
        tail->next=curr;
        tail=curr;
        
        curr=curr->next;
    }
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        
        Node* zerohead=new Node(-1);
        Node* zerotail=zerohead;
        
        Node* onehead=new Node(-1);
        Node* onetail=onehead;
        
        Node* twohead=new Node(-1);
        Node* twotail=twohead;
        
        
        Node* temp=head;
        
        while(temp!=NULL){
            
            int value=temp->data;
            
            if(value==0){
                insert(zerotail,temp);
                
            }
            else if(value==1){
                insert(onetail,temp);
                
            }
            else if(value==2){
                insert(twotail,temp);
                
            }
            
            temp=temp->next;
        }
        
        //merge
        
        //list is not empty
        if(onehead->next!=NULL){
            zerotail->next=onehead->next;
        }
        else{
            //list is empty
            zerotail->next=twohead->next;
        }
        
        onetail->next=twohead->next;
        twotail->next=NULL;
        
        head=zerohead->next;
        
        delete zerohead;
        delete onehead;
        delete twohead ;
        
        return head;
        
    }
