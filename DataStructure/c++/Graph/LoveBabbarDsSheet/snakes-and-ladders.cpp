//leetcode
class Solution {
public:
    void findcordinatesR(int curr , int n , int &ro , int &co){
        int r = n - (curr-1)/n -1;
        int c = (curr-1)%n;
        if(r%2 == n%2){
            ro = r;
            co = n-1-c;
            return ;
        }
        else{
            ro = r;
            co = c;
            return;
        }
    }
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        queue<int>q;
        int steps = 0;
        bool vis[n][n];
        for(int i = 0 ; i < n ; i++)for(int j = 0 ; j < n ; j++) vis[i][j] = false;
        q.push(1);
        vis[n-1][0] = true;
        while(!q.empty()){
            int size = q.size();
            
            for(int i = 0 ; i < size ; i++){
                int x = q.front();
                q.pop();
                if(x == n*n) return steps;
                for(int k = 1 ; k <= 6 ; k++){
                    if(k + x > n*n) break;
                    int r,c;
                    findcordinatesR(k+x , n , r , c);
                    if(vis[r][c] == true) continue;
                    vis[r][c] = true;
                    if(board[r][c] == -1){
                        q.push(k+x);
                    }else{
                        q.push(board[r][c]);
                    }
                }
            }
            steps++;
        }
        return -1;
    }
    
};
//geeksforgeeks
class Solution{
public:
    int minThrow(int N, int arr[]){
        vector<int>mainarr(31,-1);
        int steps = 0;
        int low,high;
        low = 0,high = 1;
        for(int i = 0 ; i < N ; i++){
            mainarr[arr[low]] = arr[high];
            low = low + 2;
            high = high + 2;
        }
        bool vis[31] = {false};
        queue<int>q;
        q.push(1);
        vis[1] = true;
        while(!q.empty()){
            int size = q.size();
            for(int i = 0 ; i < size ; i++){
                int x = q.front();
                q.pop();
                if(x == 30) return steps;
                for(int k = 1 ; k <= 6 ; k++){
                    if(k + x > 30) break;
                    if(vis[k+x] == true) continue;
                    vis[k+x] = true;
                    if(mainarr[k+x] == -1){
                        q.push(k+x);
                    }else{
                        q.push(mainarr[k+x]);
                    }
                }
            }
            steps++;
        }
        return steps;
    }
};
