Implement LRU cache
 question:- https://practice.geeksforgeeks.org/problems/lru-cache/1
 solution-
 
 class node{
        public:
        int key;
        int val;
        node* next;
        node* prev;
        node(int k , int v){
            key = k;
            v = val;
        }
    };
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    int cap;
    unordered_map<int  , node*>m;
    LRUCache(int capacity)
    {
        cap = capacity;
        head->next = NULL;
        tail->prev = head;
    }
    void addnode(node* newnode){
        node* temp = head->next;
        newnode->next = temp;
        newnode ->prev = head;
        head->next = newnode;
        temp ->prev = newnode;
    }
    void deletenode(node* delnode){
        node* delprev = delnode->prev;
        node* delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }
    //Function to return value corresponding to the key.
    int get(int key)
    {
        if (m.find(key) != m.end()) {
            node* resnode = m[key];
            int res = resnode->val;
            m.erase(key);
            deletenode(resnode);
            addnode(resnode);
            m[key] = head->next;
            return res; 
        }
    
        return -1;
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        if(m.find(key) != m.end()) {
            node* existingnode = m[key];
            m.erase(key);
            deletenode(existingnode);
        }
        if(m.size() == cap) {
          m.erase(tail->prev->key);
          deletenode(tail->prev);
        }
        
        addnode(new node(key, value));
        m[key] = head->next; 
    }
