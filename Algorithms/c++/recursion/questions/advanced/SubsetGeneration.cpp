#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>subsets;

void generate(vector<int>&subset , int i , vector<int>&nums){
  if(i == nums.size()){
    subsets.push_back(subset);
    return;
  }
  generate(subset , i + 1 , nums);
  subset.push_back(nums[i]);
  generate(subset , i + 1 , nums);
  subset.pop_back();
}
int main() 
{
   int n ; 
   cin>>n;

   vector<int>nums;
   for(int i = 0 ; i < n ; i ++){
     int x;
     cin>>x;
     nums.push_back(x);
   }
   
   vector<int>empty;
   generate(empty , 0 , nums);
   
   for(auto it : subsets){
     for(auto ele : it){
       cout<<ele<<" ";
     }
     cout<<endl;
   }
    return 0;
}
