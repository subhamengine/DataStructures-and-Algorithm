Q2. Reverse a queue using recursion.
    question:- https://practice.geeksforgeeks.org/problems/queue-reversal/1
    solution:-
    
    void func(queue<int>&q){
    if(q.empty()) return;
    int x = q.front();
    q.pop();
    func(q);
    q.push(x);
}
queue<int> rev(queue<int> q)
{
    func(q);
    return q;
}
