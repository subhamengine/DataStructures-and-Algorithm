First Node of the starting of the loop: https://www.geeksforgeeks.org/find-first-node-of-loop-in-a-linked-list/
    solution:
    
    Node* startnode(Node* head){
  Node* low = head;
  Node* high = head;

  while(low!=NULL and high!=NULL and high->next!=NULL){
    low = low->next;
    high = high->next->next;
    if(low == high) break;
  }
  if(low == head) return low;
  else if(low == high){
    low = head;
    while(low->next != high->next){
      low = low->next;
      high = high->next;
    }
  return low->next;
  }
}
