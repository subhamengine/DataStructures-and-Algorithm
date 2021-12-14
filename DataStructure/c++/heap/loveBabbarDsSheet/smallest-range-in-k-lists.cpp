class Solution{
    public:
    struct element{
      int value;
      int row;
      int index;
      void create(int val , int r , int i){
          value = val;
          row = r;
          index = i;
      }
    };
    struct compare{
        bool operator()(struct element a ,struct element b){
            return a.value>b.value;
        }
    };
    pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
    {
          int mini = INT_MAX , maxi = INT_MIN , range = INT_MAX;
          priority_queue<struct element , vector<struct element> , compare>q;
          int low,high;
          
          //pushing first element of every list
          for(int i = 0 ; i < k ; i++){
              struct element a;
              a.create(KSortedArray[i][0] , i , 0);
              q.push(a);
              mini = min(mini , KSortedArray[i][0]);
              maxi = max(maxi , KSortedArray[i][0]);
          }
          while(!q.empty()){
              struct element temp = q.top();
              q.pop();
              int mayBeMin = temp.value;
              if(range > maxi-mayBeMin){
                  mini = mayBeMin;
                  range = maxi - mini;
                  low = mini;
                  high = maxi;
              }
              if(temp.index == n-1) break;
              temp.index+=1;
              struct element add;
              add.create(KSortedArray[temp.row][temp.index] , temp.row , temp.index);
              q.push(add);
              maxi = max(maxi , KSortedArray[temp.row][temp.index]);
          }
          pair<int,int>p = {low,high};
          return p;
    }
};
