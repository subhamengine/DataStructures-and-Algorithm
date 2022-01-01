#include <bits/stdc++.h>
using namespace std;
void deletemid(stack<int>&st , int k){
  if(k == 1){
    st.pop();
    return;
  }
  //hypo
  int temp = st.top();
  
  st.pop();
  deletemid(st,k-1);
  //induction
  st.push(temp);
  

}
int main() 
{
    stack<int>st;
    for(int i = 0 ; i < 4 ; i++){
      int x;
      cin>>x;
      st.push(x);
    }
    int k = 0;
    if(st.size()%2 == 0){
      k = st.size()/2;
    }
    else{
      k = (st.size()/2)+1; 
    }
    deletemid(st,k);
    while(!st.empty()){
      cout<<st.top()<<endl;
      st.pop();
    }
    return 0;
}
