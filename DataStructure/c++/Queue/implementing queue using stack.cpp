stack<int>st1;
stack<int>st2

void push(int num){
  st2.push(num);
  while(!st2.empty()){
    int x = st2.top();
    st2.pop();
    st1.push(x);
  }
}

void pop(){
  q1.pop();
}
