Node* fpre(Node* temp){
    if(temp->right == NULL) return temp;
    return fpre(temp->right);
}
Node* fsuc(Node* temp){
    if(temp->left == NULL) return temp;
    return fsuc(temp->left);
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(!root) return;
    if(root->key == key){
        if(root->left) pre = fpre(root->left);
        if(root->right) suc = fsuc(root->right);
    }
    if(key > root->key){
        pre = root;
        findPreSuc(root->right , pre , suc , key);
    }
    else if(key < root->key){
        suc = root;
        findPreSuc(root->left , pre , suc , key);
    }
}
