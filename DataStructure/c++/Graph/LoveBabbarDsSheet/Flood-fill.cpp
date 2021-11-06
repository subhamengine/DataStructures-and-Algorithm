class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        queue<pair<int,int>>q;
        int m = image.size();
        int n = image[0].size();
        q.push({sr,sc});
        int dx[]={0 , 0  , -1  , +1};
        int dy[]={-1, +1 ,  0 , 0};
        int origin = image[sr][sc];
        image[sr][sc] = newColor;
        while(!q.empty()){
            auto cur = q.front();
            q.pop();
            int ix = cur.first;
            int jy = cur.second;
            for(int i = 0 ; i < 4 ; i++){
                int newi = dx[i] + ix;
                int newj = dy[i] + jy;
                if(newi >= 0 and newj >= 0 and newi < m  and newj < n and image[newi][newj]!=newColor and image[newi][newj] == origin){
                    image[newi][newj] = newColor;
                    
                    q.push({newi , newj});
                }
            }
        }
        return image;
    }
};
