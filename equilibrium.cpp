int findEquilibrium(int A[], int n)
{
   
    if(n == 0)
        return 0;
        
    int sum, left;
    sum = 0;
    left = 0;
    
    for(int i=0; i<n; i++)
        sum += A[i];
        
    for(int i=0; i<n; i++){
        sum -= A[i];
        
        if(sum == left)
            return i;
            
        left += A[i];
    }
    
    return -1;
}