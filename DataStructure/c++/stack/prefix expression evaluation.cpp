#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int prefixevaluation(string s){
  stack<int>st;
  
  for(int i = s.length()-1 ; i>=0 ; i--){
    if(s[i]>='0' and s[i]<='9'){
      st.push(s[i] - '0');
    }
    else{
      int opr1 = st.top();
      st.pop();
      int opr2 = st.top();
      st.pop();
      
      switch(s[i]){
        
        case '+':
        st.push(opr1 + opr2);
        break;
        case '-':
        st.push(opr1 - opr2);
        break;
        case '*':
        st.push(opr1 * opr2);
        break;
        case '/':
        st.push(opr1 / opr2);
        break;
        case '^':
        st.push(pow(opr1 , opr2));
        break;
      }
    }
  }
  return st.top();
}
int main() 
{
   cout<<prefixevaluation("-+7*45+20");
   return 0;
}
