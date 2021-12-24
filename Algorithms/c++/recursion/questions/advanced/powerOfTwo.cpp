class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        return floor(log2(n)) == ceil(log2(n))?true:false;
        
        
    }
};
