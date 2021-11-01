int ind = 0;
Node* help(int pre[], int size, int mn, int mx) {
    if(ind<size && pre[ind]>=mn && pre[ind]<=mx) {
        Node *node = newNode(pre[ind++]);
        node->left = help(pre, size, mn, node->data-1);
        node->right = help(pre, size, node->data+1, mx);
        return node;
    }
    return NULL;
}
Node* post_order(int pre[], int size)
{
    ind = 0;
    Node* root = help(pre , size , INT_MIN , INT_MAX);
    return root;
}
