class Solution{
  public:
    //Function to merge K sorted linked list.
    struct compare{
        bool operator()(struct Node* a,struct Node* b){
            return a->data>b->data;
        }
    };
    Node * mergeKLists(Node *arr[], int k)
    {
           priority_queue<Node*,vector<Node*>,compare>q;
           for(int i = 0 ; i < k ; i++){
               q.push(arr[i]);
           }
           Node* dummy = new Node(0);
           Node* last = dummy;
           
           while(!q.empty()){
               Node* curr = q.top();
               q.pop();
               if(curr->next!=NULL) q.push(curr->next);
               last->next = curr;
               last = curr;
           }
           return dummy->next;
    }
};
/*take the smallest or the head node of each of the k lists and push it to
the minheap. Then take out the top of the min heap and attach it to the ans.
Then check wheather the next of the top element is not empty, push the next element.
Continue this process untill the queue dosent becomes empty.
