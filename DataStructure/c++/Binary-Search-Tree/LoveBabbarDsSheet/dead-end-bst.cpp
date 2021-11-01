bool help(Node* root , int mn , int mx){
    if(!root) return false;
    if(mn == mx) return true;
    else return help(root->left , mn , root->data - 1) or help(root->right , root->data + 1 , mx);
    
}

bool isDeadEnd(Node *root)
{
    return help(root , 1 , INT_MAX);
}
