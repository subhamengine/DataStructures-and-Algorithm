#include <iostream>
using namespace std;

void stackusingqueue(){
  
  //un-optimised way = using 2 queues q1,q2.
  //for push => push the emelent in q2,then take top from q1 and push to q2(element by element) till q1 is not empty.
  //then push all the elements from q2 and push to q1(element by element).
  //for pop => q1.pop(); , for top => q1.top();
  
  //optimised way = using a singlr queue
  
  void push(int x){
    queue<int>q1;
    
    q1.push(x);
    for(int i=0 ; i<q1.size()-1 ; i++){
      int n = q1.top();
      q1.push(n);
      q1.pop();
    }
  }
  
  int pop(){
    int x = q1.top();
    q1.pop();
    return x;
  }
  
  int top(){
    return q1.top();
  }
  
}

int main() 
{
    cout << "Hello, World!";
    return 0;
}
