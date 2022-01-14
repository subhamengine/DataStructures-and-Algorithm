#include <bits/stdc++.h>
using namespace std;

void solve(string op, int n, int zeros, int ones){
  if(n == 0){
    cout<<op<<" ";
    return;
  }
  if(ones > zeros){
    string op1 = op;
    string op2 = op;
    op1.push_back('1');
    op2.push_back('0');
    solve(op1,n-1,zeros,ones+1);
    solve(op2,n-1,zeros+1,ones);
  }
  else{
    string op1 = op;
    op1.push_back('1');
    solve(op1,n-1,zeros,ones+1);
  }
}



int main() 
{
    int n = 5;
    string op = "";
    int ones = 0, zeros = 0;
    solve(op,n,zeros,ones);
    return 0;
}
