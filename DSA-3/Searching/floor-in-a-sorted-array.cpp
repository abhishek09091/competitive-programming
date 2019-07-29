/*******

https://www.geeksforgeeks.org/floor-in-a-sorted-array/

*******/


/*This is a function problem.You only need to complete the function given below*/
// Function to find floor of x
// n: size of vector
// x: element whose floor is to find
int findFloor(vector<long long> v, long long n, long long x){
    
    // Your code here
    int start = 0;
    int end = v.size()-1;
    
    if(x >= v[end]){
        return end;
    }
    
    while(start <= end){
        
        int mid = start + (end - start)/2;
        
        if(v[mid] == x){
            return mid;
            //mid > 0 && arr[mid-1] <= x && x < arr[mid]
        }else if(mid > 0 && x < v[mid] &&  v[mid - 1] <= x){
             return mid - 1;
        }else if(x < v[mid]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    
    return -1;
    
}