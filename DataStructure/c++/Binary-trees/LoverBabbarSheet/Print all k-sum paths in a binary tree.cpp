#include <bits/stdc++.h>
using namespace std;
void func(Node* root , vector<int> &path , int k){
  if(!root) return;
  path.push_back(root->data);
  func(root->left , path , k);
  func(root->right , path , k);
  
  int f = 0 ; 
  for(int j = path.size() - 1 ; j>=0 ; j--){
    k += path[j];
    if(f == k){
      for(int m = j ; m < path.size() ; m ++){
        cout<<path[m]<<" ";
      }
      cout<<endl;
    }
  }
  path.pop_back();
}

int main() 
{
    vector<int>path;
    func(root,path,5);
}
