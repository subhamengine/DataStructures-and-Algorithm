#include <bits/stdc++.h>
using namespace std;
void insert(stack<int>&st , int ele){
  if(st.empty() || st.top() >= ele){
    st.push(ele);
    return;
  }
  //hypo
  int p = st.top();
  st.pop();
  //induction
  insert(st,ele);
  st.push(p);
}
void reverse(stack<int>&st){
  if(st.size() == 1){
    return;
  }
  //hypo
  int ele = st.top();
  st.pop();
  reverse(st);
  //induction
  insert(st,ele);
}
int main() 
{
    stack<int>st;
    for(int i = 0 ; i < 10 ; i++){
      int x;
      cin>>x;
      st.push(x);
    }
   reverse(st);
   while(!st.empty()){
     cout<<st.top()<<endl;
     st.pop();
   }
}
