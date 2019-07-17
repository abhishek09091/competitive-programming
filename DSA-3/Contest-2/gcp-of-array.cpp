int gcd(int a,int b){
    
    if(a == 0){
        return b;
    }
    return gcd(b%a,a);
}

int generalizedGCD(int num, int* arr)
{
    // WRITE YOUR CODE HERE  
    int result = arr[0];
    
    for(int i=1; i<num; i++){
       // cout<<arr[i]<<endl;
        result = gcd(arr[i],result);
    }
    
    return result;
}