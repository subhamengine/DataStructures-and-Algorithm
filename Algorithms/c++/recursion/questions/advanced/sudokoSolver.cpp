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

/*use test case
5 3 . 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
. 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 . 4 8 5 6
9 6 . 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9*/
