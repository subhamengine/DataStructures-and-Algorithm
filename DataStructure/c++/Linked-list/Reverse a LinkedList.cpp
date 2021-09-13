Reverse a LinkedList (Iteratively) : https://www.geeksforgeeks.org/reverse-a-linked-list/
solution:

Node* reverse(Node* head){
  Node* curr = head;
  Node* prev = NULL , next = NULL;
  while(curr!=NULL){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  head = prev;
}
return head;

2.Reverse a LinkedList (Recursively) : https://www.geeksforgeeks.org/reverse-a-linked-list/
solution:

Node* reverse(Node* head){
  if(head == NULL || head->next == NULL) return head;
  Node* temp = reverse(head->next);
  head->next->next = head;
  head->next = NULL;
  return temp;
}
