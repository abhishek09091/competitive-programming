/********

https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/

**********/
// C++ program to find union of 
// two sorted arrays 
#include <bits/stdc++.h> 
using namespace std; 
void printIntersection(int arr1[], int arr2[], int N, int M);  
  
/* Driver program to test above function */
int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        
        // Function calling 
        printIntersection(arr1, arr2, N, M); 
        
        cout << endl;
    }
    
  return 0; 
} 


/*This is a function problem.You only need to complete the function given below*/
/* Function prints Intersection of arr1[] and arr2[] 
N is the number of elements in arr1[] 
M is the number of elements in arr2[] */
void printIntersection(int arr1[], int arr2[], int N, int M) { 
    //Your code here
    
    int i = 0;
    int j = 0;
    bool flag = false;
    while(i < N && j < M){
        
        if(arr1[i] == arr2[j]){
            
            if(!flag){
                cout<<arr1[i]<<" ";
                flag = true;
            }else if(arr1[i] != arr1[i-1] || arr2[j] != arr2[j-1]){
                cout<<arr1[i]<<" ";
            }
            i++;
            j++;
        }else if(arr1[i] < arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    
    if(!flag){
        cout<<"-1";
    }
    return;
}
