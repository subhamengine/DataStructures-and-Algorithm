 bool isPowerOfThree(int n) {
        if(n<=1) return n==1;
        return n%3==0 and isPowerOfThree(n/3);
    }
