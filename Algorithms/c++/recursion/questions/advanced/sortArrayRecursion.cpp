 // void insert(vector<int>& nums , int ele){
    //     if(nums.size() == 0 || nums[nums.size()-1] <= ele){
    //         nums.push_back(ele);
    //         return;
    //     }
    //     //hypo
    //     int l = nums[nums.size()-1];
    //     nums.pop_back();
    //     insert(nums,ele);
    //     nums.push_back(l);
    // }
    // void sortme(vector<int>& nums){
    //     if(nums.size() == 1) return;
    //     //hypo
    //     int ele = nums[nums.size()-1];
    //     nums.pop_back();
    //     sortme(nums);
    //     //induction
    //     insert(nums,ele);
    // }
    vector<int> sortArray(vector<int>& nums) {
        // sortme(nums);
        sort(nums.begin(),nums.end());
        return nums;
    }
