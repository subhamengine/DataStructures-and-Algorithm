Node* kthAncestorDFS(Node *root, int node , int &k)
{  
    // Base case
    if (!root)
        return NULL;
     
    if (root->data == node||
       (temp =  kthAncestorDFS(root->left,node,k)) ||
       (temp =  kthAncestorDFS(root->right,node,k)))
    {  
        if (k > 0) k--;
         
        else if (k == 0){
            cout<<"Kth ancestor is: "<<root->data;
            return NULL;
        }
         
        return root;
    }
}
