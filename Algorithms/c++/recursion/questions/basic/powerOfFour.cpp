public:
    bool isPowerOfFour(int n) {
       if(n<=1) return n==1;
        return n%4 == 0 and isPowerOfFour(n/4);
    }
};
