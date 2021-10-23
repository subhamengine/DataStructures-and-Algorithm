#include <bits/stdc++.h>
using namespace std;

bool check(string s , int len , int index){
  if(index >= len ) return true;
  else{
    if(s[len] == s[index]){
      return check(s , len-1 , index + 1);
    }
    else return 0;
  }
}

int main() 
{
    string s;
    cout<<"Enter the sting\n";
    cin>>s;
    bool ans = check(s,s.length()-1 , 0);
    if(ans) cout<<"Palindrome!";
    else cout<<"Not palindrome!";
}
