/******

https://www.geeksforgeeks.org/square-root-of-an-integer/

*****/

// Function to find square root
// x: element to find square root
long long int floorSqrt(long long int x) {
    // Your code goes here   
    
    long long start = 0 , end = x;
    long long mid;
    long long ans;
    while(start <= end ){
        
        long long mid = ( start + end ) / 2;
        
        if(mid * mid == x){
            return mid;
        }else if( mid * mid < x){
            start = mid + 1;
            ans = mid;
        }else{
            end = mid - 1;
            
        }
    }
    
    return ans;
}