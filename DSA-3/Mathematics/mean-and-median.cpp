int median(int A[],int N)
{
    
    sort(A,A+N);
    
    //your code here
    //If median is in fraction then convert it to integer and return
    
    if(! (N%2)){
        return (int)(( (A[N/2]) + (A[(N/2) - 1]))/2); 
    }else{
        return (int)(A[N/2]);
    }
}
int mean(int A[],int N)
{
    long long int sum = 0;
    //your code here
    for(int i=0; i<N; i++){
        sum += A[i];
    }
    
    return (((int)sum)/N);
}
