#include <bits/stdc++.h>
using namespace std;

void solve(int o , int c , string op){
  if(o == 0 and c == 0){
    cout<<op<<" ";
    return ;
  }
  if(o != 0){
    string op1 = op;
    op1.push_back('(');
    solve(o-1,c,op1);
  }
  if(c > o){
    string op2 = op;
    op2.push_back(')');
    solve(o,c-1,op2);
  }
}
int main() 
{
    int n = 3;
    int open = n;
    int close = n;
    string op = "";
    solve(open,close,op);
    return 0;
}
