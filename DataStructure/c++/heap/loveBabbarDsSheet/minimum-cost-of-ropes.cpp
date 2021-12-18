 public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        priority_queue<long long ,vector<long long >,greater<long long>>pq;
        for(long long  i = 0 ; i < n ; i++){
            pq.push(arr[i]);
        }
        long long  ans = 0;
        while(pq.size() >= 2){
            long long  top1 = pq.top();
            pq.pop();
            long long top2 = pq.top();
            pq.pop();
            ans+=top1+top2;
            pq.push(top1+top2);
        }
        return ans;
    }
