question:- https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1
solution - 

stack<int>s;
    for(int i = 1 ; i <= k ; i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    int n = q.size();
    for(int i = 1 ; i <= n-k ; i ++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
    return q;
