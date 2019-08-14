/********

https://www.geeksforgeeks.org/sort-binary-array-using-one-traversal/

*******/
// A Sample C++ program for beginners with Competitive Programming
#include <iostream>
using namespace std;
void binSort(int A[], int N);
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}


/*This is a function problem.You only need to complete the function given below*/

// Function to sort the array A[]
// A[]: input array
// N: input array
void swap(int *a,int *b){
    
    int temp = *a;
    *a = *b;
    *b = temp;
}

void binSort(int A[], int N){
   //Your code here
   
   int i = 0;
   int j = N -1;
   
   while(i<j){
       
       while(i < j && A[i] == 0){
         i++;  
       }
       
       while(j > i && A[j] == 1){
         j--;  
       }
       
       swap(&A[i],&A[j]);
       i++;
       j--;
       
   }

   
   /**************
    * No need to print the array
    * ************/
}