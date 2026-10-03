int ncr( int n,int r){ //this is ncr functions.
    if(n<r){
        return 0;
    }
    if(r==1){
        return n;
    }
   return (n-r+1)*ncr(n,r-1)/r;
    
}