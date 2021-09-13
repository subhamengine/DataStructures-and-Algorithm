Remove loop in Linked List : https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1#
    solution:
    
    void removeLoop(Node* head)
    {
        Node* low=head;
        Node* high=head;
        while(low!=NULL and high!=NULL and high->next!=NULL){
            low=low->next;
            high=high->next->next;
            if(low==high) break;
        }
        if(low==head){
            while(high->next!=low){
                high=high->next;
            }
            high->next=NULL;
        }
        else if(low==high){
            low=head;
            while(low->next!=high->next){
                low=low->next;
                high=high->next;
            }
            high->next=NULL;
        }
    }
    
