class Solution {
public:
    int solve(vector<int>&nums , int i , int j , int choice){
        if(i>j) return 0;
        if(choice == 0){
            return max(nums[i]+solve(nums,i+1,j,1),nums[j]+solve(nums,i,j-1,1));
        }
        else return min(solve(nums,i+1,j,0),solve(nums,i,j-1,0));
    }
    bool PredictTheWinner(vector<int>& nums) {
        long long ans;
        int n = nums.size()-1;
        ans = solve(nums,0,n,0);
        long long total = 0;
        for(int i = 0 ; i <= n ;i++){
            total += (long long)nums[i];
        }
        total = total-ans;
        return (ans>=total);
    }
};
