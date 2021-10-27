void giveInorder(Node* root , vector<int>&vec){
  if(!root) return;
  giveInorder(root1->left);
  
  vec.push_back(root1->data);
  
  giveInorder(root1->right);
  
}
vector<int> merge(vector<int>&in1, vector<int>&in2 , int m, int n)
{
    // mergedArr[] is going to contain result
    vector<int>mergedArr(m+n);
    int i = 0, j = 0, k = 0;
 
    // Traverse through both arrays
    while (i < m && j < n)
    {
        // Pick the smaller element and put it in mergedArr
        if (in1[i] < in2[j])
        {
            mergedArr[k] = in1[i];
            i++;
        }
        else
        {
            mergedArr[k] = in2[j];
            j++;
        }
        k++;
    }
    return mergedArr;
}
Node* sortedArrayToBST(vector<int>&mergedArr , int start, int end)
{
    /* Base Case */
    if (start > end)
    return NULL;
 
    /* Get the middle element and make it root */
    int mid = (start + end)/2;
    node *root = newNode(mergedArr[mid]);
 
    /* Recursively construct the left subtree and make it
    left child of root */
    root->left = sortedArrayToBST(mergedArr, start, mid-1);
 
    /* Recursively construct the right subtree and make it
    right child of root */
    root->right = sortedArrayToBST(mergedArr, mid+1, end);
 
    return root;
}
Node* MergeTwoBst(Node* root1 , Node* root2){
  if(!root1) return root2;
  if(!root2) return root1;
  else if(!root1 and !root2) return NULL;
  vector<int>in1 , in2 , mergedArr;
  giveInorder(root1 , in1);
  giveInorder(root2 , in2);
  
  mergedArr = mergeBoth(in1 , in2 , in1.size() , in2.size());
  return sortedArrayToBST(mergedArr , 0 , m+n-1)
  
}
