Implement a circular queue
    question:- https://www.geeksforgeeks.org/circular-queue-set-1-introduction-array-implementation/
    solution-:
    
    enqueue(int val){
  if(isfull()){
    return;
  }
  else if(isempty()){
    front = rear = 0;
  }
  else{
    rear = (rear+1) % N;    //N = size of the array
  }
  arr[rear] = val;
  
}
deque(int val){
  int x = 0;
  if(isempty()){
    return;
  }
  else if(front == rear){
    x = arr[front];
    front = rear = -1;
  }
  else{
    x = arr[front];
    front = (front + 1)%N;   //N = size of the array
  }
  return x;
}

isempty(){
  if(front == -1 and rear == -1) return true;
  else return false;
}

isfull(){
  if((rear + 1)%N == front){
    return true;
  else return false;
  }
}
