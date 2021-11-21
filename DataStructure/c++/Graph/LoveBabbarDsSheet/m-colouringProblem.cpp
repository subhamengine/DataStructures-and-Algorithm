bool issafe(int node , int color[] , bool graph[101][101] , int N , int col){
    for(int k = 0 ; k < N ; k++){
        if(k != node and graph[k][node] == 1 and color[k] == col) return false;
    }
    return true;
}
bool solve(int node , int color[] , int m , int N , bool graph[101][101]){
    if(node == N) return true;
    for(int i = 1 ; i <= m ; i++){
        if(issafe(node,color,graph,N,i)){
            color[node] = i;
            if(solve(node+1,color,m,N,graph)) return true;
            color[node] = 0;
        }
    }
    return false;
}
bool graphColoring(bool graph[101][101], int m, int N)
{
    int color[N] = {0};
    if(solve(0,color,m,N,graph)) return true;
    return false;
}
