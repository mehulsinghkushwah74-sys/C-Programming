
int ncr( int n,int r){
    if(r==1){
        return n;
    }
   return (n-r+1)*ncr(n,r-1)/r;
    
}