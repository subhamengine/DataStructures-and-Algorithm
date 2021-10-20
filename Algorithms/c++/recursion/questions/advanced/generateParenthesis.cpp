#include<bits/stdc++.h>
using namespace std;
vector<string>valid;
void generate(string &s , int open , int close){
  if(open == 0 and close == 0){
    valid.push_back(s);
    return;
  }
    if(open > 0){
    s= s + "(";
    generate(s , open - 1 , close);
    s.pop_back();
  }
  if(close > 0){
    if(open < close){
      s = s + ")";
      generate(s , open , close-1);
      s.pop_back();
    }
  }
}
int main(){
  int n;
  cout<<"Enter the number of opening and closing parenthesis:\n";
  cin>>n;
  string s = "";
  generate(s , n , n);
  for(int i = 0 ; i < valid.size() ; i++){
    for(auto it : valid[i]){
      cout<<it<<" ";
    }
    cout<<endl;
  }
}
