class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    int dx[] = {-2 , -1 , 1 , 2 , +2 , +1 , -1 , -2};
	    int dy[] = {+1 , +2 , 2 , 1 , -1 , -2 , -2 , -1};
	    vector<vector<int>>grid(N,vector<int>(N));
	    for(int i = 0 ; i < N ; i++){
	        for(int j = 0 ; j < N ; j++) grid[i][j] = 0;
	    }
	    int x1 = KnightPos[0];
	    int y1 = KnightPos[1];
	    int x2 = TargetPos[0];
	    int y2 = TargetPos[1];
	    if(x1 == x2 and y1 == y2) return 0;
	    
	    queue<pair<int,int>>q;
	    q.push({x1-1 , y1-1});
	    while(!q.empty()){
	        auto cur = q.front();
	        int ix = cur.first;
	        int jy = cur.second;
	        q.pop();
	        for(int i = 0 ; i < 8 ; i++){
	            int newI = dx[i] + ix;
	            int newJ = dy[i] + jy;
	            if(newI >= 0 and newJ >= 0 and newI < N and newJ < N and grid[newI][newJ] == 0){
	                grid[newI][newJ] = grid[ix][jy] + 1;
	                q.push({newI , newJ});
	            }
	        }
	    }
	    return grid[x2-1][y2-1];
	}
};
