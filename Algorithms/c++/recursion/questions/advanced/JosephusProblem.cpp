#include <iostream>
using namespace std;

int jos(int n , int k){
  if(n == 1) return 0;
  return (jos(n-1 , k) + k) % n;
}
int main() 
{
  int n , k ;
  cin>>n>>k;
    cout << jos(n,k);
    return 0;
}   
//leetcode
class Solution {
public:
    int help(int n , int k){
        if(n == 1) return 0;
        return(help(n-1,k)+k)%n;
    }
    int findTheWinner(int n, int k) {
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            arr[i] = i+1;
        }
        int ans = help(n,k);
        return arr[ans];
    }
    
};
