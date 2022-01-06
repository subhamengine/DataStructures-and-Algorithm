long long toh(int N, int from, int to, int aux) {
        // Your code here
        long long count = pow(2,N);
        if(N==1){
            cout<<"move disk "<< N <<" from rod "<< from <<" 	to rod "<< to<<endl;
            return 1;
        }
    
        toh(N-1,from,aux,to);
         cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        toh(N-1,aux,to,from);
        
        
