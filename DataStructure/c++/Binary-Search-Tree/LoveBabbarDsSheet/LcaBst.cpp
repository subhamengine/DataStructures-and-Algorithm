//approach:- check for each root, if(n1 and n2 both are smaller than the current node), then
//call the recursion for node's left. second condition:- if(n1 and n2 both are greater than 
//the current node), call the recursion for node's right.
//If neither of the condition is true, return the current node. thats the LCA

Node* LCA(Node *root, int n1, int n2)
{
   if(!root) return NULL;
   if(n1 < root->data and n2 < root->data) return LCA(root->left , n1 , n2);
   if(n1 > root->data and n2 > root->data) return LCA(root->right , n1 , n2);
   else return root;
}
