class Solution
{
public:
    unordered_map<int,int>mp;
    int count = 0;
    
    void createMap(Node* root1){
        if(!root1) return;
        createMap(root1->left);
        mp[root1->data] = 1;
        createMap(root1->right);
    }
    void iffound(int f){
        if(mp.find(f) != mp.end()) count++;
    }
    void countsum(Node* root2 , int x){
        if(!root2) return;
        iffound(x - root2->data);
        countsum(root2->left , x);
        countsum(root2->right , x);
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
        createMap(root1);
        countsum(root2 , x);
        return count;
    }
};
