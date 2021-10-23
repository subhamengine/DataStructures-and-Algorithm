#include<bits/stdc++.h>
using namespace std;

vector<int> nums;

void swap(int index , int i){
  int temp = nums[index];
  nums[index] = nums[i];
  nums[i] = temp;
}
void permutate(int index , vector<int>& nums , vector<vector<int>>&ans){
  if(index == nums.size()){
    ans.push_back(nums);
    return;
  }
  for(int i = index ; i < nums.size() ; i++){
    swap(index , i);
    permutate(index + 1 , nums , ans);
    swap(index , i);
  }
}
int main(){
  int n;
  cin>>n;
  for(int i = 0 ; i < n ; i++){
    int x;
    cin>>x;
    nums.push_back(x);
  }
  vector<vector<int>>ans;
  
  permutate(0 , nums , ans);
  
  for(auto it:ans){
    for(auto jt:it){
      cout<<jt<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
