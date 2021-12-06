class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int,vector<int>>pq;
        for(int i = 0 ; i <= r ; i++){
            pq.push(arr[i]);
            if(pq.size() > k) pq.pop();
        }
        return pq.top();
    }
};
