#include <bits/stdc++.h>
using namespace std;

 char board[9][9];
 
bool isvalid( int row , int col , char c){
  
  for(int i = 0 ; i < 9 ; i++){
    if(board[i][col] == c) return false;
    if(board[row][i] == c) return false;
    if(board[3 * (row/3) + i/3] [3 * (col/3) + i%3] == c) return false;
  }
  return true;
  
}

bool solve(){
  
  for(int i = 0 ; i < 9; i++){
    
    for(int j = 0 ; j < 9 ; j++){
      
      if(board[i][j] == '.'){
        
        for(char c = '1' ; c <= '9' ; c++){
          
          if(isvalid( i , j , c)){
            board[i][j] = c;
            
            if(solve() == true){
              return true;
            }
            
            else board[i][j] = '.';
          }
        }
        
        return false;
      }
    }
  }
  return true;
}

void solveSudoku(){
  solve();
}

int main() 
{
   for(int i = 0 ; i < 9 ; i++){
      for(int j = 0 ; j < 9 ; j++){
        cin>>board[i][j];
      }
    }
  
    cout<<"Original Matrix\n";
     for(int i = 0 ; i < 9 ; i++){
      for(int j = 0 ; j < 9 ; j++){
        cout<<board[i][j]<<" ";
      }
      cout<<endl;
    }
    solveSudoku();
    cout<<"\n\n";
    cout<<"Solved Matrix\n\n";
     for(int i = 0 ; i < 9 ; i++){
      for(int j = 0 ; j < 9 ; j++){
        cout<<board[i][j]<<" ";
      }
      cout<<endl;
    }
    return 0;
}
