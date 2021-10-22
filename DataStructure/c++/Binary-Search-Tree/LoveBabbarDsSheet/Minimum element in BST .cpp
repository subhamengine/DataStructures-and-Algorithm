int minValue(Node* root) {
    if(!root) return -1;
    
    
    while(root!=NULL){
        if(root->left != NULL){
            root = root->left;
        }
       else return root->data;
    }
    
}
