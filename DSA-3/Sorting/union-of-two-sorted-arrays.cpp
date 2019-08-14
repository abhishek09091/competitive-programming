/******

https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/

*****/
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    findUnion(arr1,arr2, N, M);
	    
	    cout << endl;
	    
	}
	
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//arr1,arr2 : the arrays
// n, m: size of arrays
void findUnion(int arr1[], int arr2[], int n, int m){
    //Your code here
   bool flag1 = false;
   bool flag2 = false;
   
   int i = 0;
   int j = 0;
   
   while(i < n && j < m){
       
       if(arr1[i] == arr2[j]){
           
           if(!flag1 || !flag2){
               cout<<arr1[i]<<" ";
               flag1 = true;
               flag2 = true;
           }else{
               if(arr1[i] != arr1[i-1]){
                   cout<<arr1[i]<<" ";
               }
           }
           i++;
           j++;
       }else if(arr1[i] < arr2[j]){
           if(!flag1){
               cout<<arr1[i]<<" ";
               flag1 = true;
           }else{
               if(arr1[i] != arr1[i-1]){
                   cout<<arr1[i]<<" ";
               }
           }
           i++;
       }else{
           if(!flag2){
               cout<<arr2[j]<<" ";
               flag2 = true;
           }else{
               if(arr2[j] != arr2[j-1]){
                   cout<<arr2[j]<<" ";
               }
           }
           j++;
       }
   }
   
   while(i < n){
       if(!flag1){
           cout<<arr1[i]<<" ";
           flag1 = true;
       }else{
           if(arr1[i] != arr1[i-1]){
               cout<<arr1[i]<<" ";
           }
       }
       i++;
   }
   
   while(j < m){
       if(!flag2){
           cout<<arr2[j]<<" ";
           flag2 = true;
       }else{
           if(arr2[j] != arr2[j-1]){
               cout<<arr2[j]<<" ";
           }
       }
       j++;
   }
}