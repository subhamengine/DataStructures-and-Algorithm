#include <bits/stdc++.h>
using namespace std;

void reversestring(string s){
  
  stack<string>st;
  
  for(int i=0 ;i < s.length() ; i++){
    
    string word = "";
    while(s[i]!=' ' and i < s.length()){
      word+=s[i];
      i++;
    }
    st.push(word);
  }
  
  while(!st.empty()){ 
    cout<<st.top()<<" ";
    st.pop();
  }cout<<endl;
}

int main() 
{
   string s = "hi this is subham sharma";
   reversestring(s);
}
