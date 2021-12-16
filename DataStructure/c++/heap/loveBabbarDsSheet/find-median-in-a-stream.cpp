public:
    //Function to insert heap.
    priority_queue<int> s;
    priority_queue<int,vector<int>,greater<int>> l;
    void insertHeap(int &x)
    {
        if(l.size() > 0 and l.top() < x){
            l.push(x);
        }
        else{
            s.push(x);
        }
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        if(s.size() - l.size()  == 2){
            int x = s.top();s.pop();
            l.push(x);
        }
        else if(l.size() - s.size() == 2){
            int x = l.top();
            l.pop();
            s.push(x);
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(l.size() == s.size())
            return (l.top() + s.top() )/2.0;
        else if(l.size() > s.size()) return 1.0 * l.top();
        else if(s.size() > l.size()) return 1.0 * s.top();
    }
