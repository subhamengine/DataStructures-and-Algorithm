Detect a loop in a LinkedList. : https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1
    solution: 
    
    bool detectLoop(Node* head)
    {
        unordered_set<Node*>s;
        while(head!=NULL){
            if(s.find(head)!=s.end()){
                return true;
            }
            s.insert(head);
            head=head->next;
        }
        return false;
    }
