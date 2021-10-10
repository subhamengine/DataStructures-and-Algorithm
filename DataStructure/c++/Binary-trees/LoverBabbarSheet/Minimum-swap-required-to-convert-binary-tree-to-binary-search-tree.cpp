#include <bits/stdc++.h>
using namespace std;

void (Node* root , vector<int> &temp){
  
  if(!root) return;
  
  inorder(root->left , temp);
  temp.push_back(root->data);
  inorder(root->right , temp);
}

int main() 
{
  vector<int>temp;
  inorder(root , temp );
  
  vector<int> res = temp;
  
  sort(res.begin() , res.end());
  
  int ans = 0;
  for(int i = 0 ; i < res.size() ; i++){
    if(res[i] != temp[i]){
      ans++;
    }
  }
  cout<<ans;
}
