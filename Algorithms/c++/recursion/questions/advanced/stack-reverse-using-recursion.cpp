#include <bits/stdc++.h>
using namespace std;

void insert(stack<int>&st , int temp){
  if(st.size()==0){
    st.push(temp);
    return;
  }
  //hypo
  int k = st.top();
  st.pop();
  insert(st,temp);
  //induction
  st.push(k);
}
void reverse(stack<int>&st){
  if(st.size() == 1)return;
  int temp = st.top();
  st.pop();
  //hypo
  reverse(st);
  //induction
  insert(st,temp);
}

int main() 
{
    int n;
    cin>>n;
    stack<int>st;
    for(int i = 0 ; i < n ; i++){
      int x; 
      cin>>x;
      st.push(x);
    }
    stack<int>gt = st;
    while(!gt.empty()){
      cout<<gt.top()<<" ";
      gt.pop();
    }
    reverse(st);
    cout<<endl;
    while(!st.empty()){
      cout<<st.top()<<" ";
      st.pop();
    }
    
    return 0;
}
