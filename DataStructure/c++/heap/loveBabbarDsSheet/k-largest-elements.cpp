class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    vector<int>ans;
	    if(k == 0) return ans;
	    priority_queue <int, vector<int>, greater<int> > pq;
	    for(int i = 0 ; i < n ; i++){
	        pq.push(arr[i]);
	        if(pq.size()>k) pq.pop();
	    }
	    while(!pq.empty()){
	        ans.push_back(pq.top());
	        pq.pop();
	    }
	    vector<int>result;
	    for(int i = k-1 ; i >= 0 ; i--){
	        result.push_back(ans[i]);
	    }
	    return result;
	}

};
