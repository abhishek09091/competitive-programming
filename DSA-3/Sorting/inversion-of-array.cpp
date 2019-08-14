/*********

https://www.geeksforgeeks.org/counting-inversions/

*********/

#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        
        cout << inversionCount(A,N) << endl;
    }
    
    return 0;
}

/*This is a function problem.You only need to complete the function given below*/
// Function to find inversion count in the array
// A[]: input array
// N: size of the array

long long int merge(long long arr[], long long temp[],long long left,long long mid, long long right){
    
    long long i , j , k;
    long long int inv_count = 0;
    
    i = left;
    j = mid;
    k = left;
    
    while((i <= mid - 1) && (j<=right)){
        
        if(arr[i] <= arr[j] ){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
            
            inv_count += (mid - i);
        }
        
        
    }
    
    while(i <= mid - 1){
        temp[k++] = arr[i++];
    }
    
    while(j <= right){
        temp[k++] = arr[j++];
    }
    
    for(int i=left; i<=right; i++){
        arr[i] = temp[i];
    }
    
    return inv_count;
}

long long int mergeSort(long long arr[], long long temp[],long long left,long long right){
    
    long long mid;
    
    long long int inv_count = 0;
    
    if(right > left){
        
        mid = (left + right) / 2;
        
        inv_count = mergeSort(arr,temp,left,mid);
        
        inv_count += mergeSort(arr,temp,mid + 1,right);
        
        inv_count += merge(arr,temp,left,mid + 1,right);
    }
    
    return inv_count;
}

long long int inversionCount(long long A[],long long N){
    //Your code here
    long long temp[N];
    
    return mergeSort(A,temp,0,N-1);
}
