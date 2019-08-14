/********

https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
http://users.monash.edu/~lloyd/tildeAlgDS/Sort/Flag/

*********/

/*This is a function problem.You only need to complete the function given below*/

// Function to segregate 0s, 1s and 2s
// A[]: input array
// N: size of array
void segragate012(int A[], int N){
    //Your code here
    
    int low = 0;
    int mid = 0;
    int high = N - 1;
    
    while(mid<= high){
        
        switch(A[mid]){
            
            case 0:
             swap(A[low++],A[mid++]);
             break;
            
            case 1:
             mid++;
             break;
             
            case 2:
             swap(A[mid],A[high--]);
             break;
        }
    }
    
}