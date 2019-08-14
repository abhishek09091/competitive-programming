/******

merge-3-sorted-arrays

*******/

#include<bits/stdc++.h>
using namespace std; 
typedef vector<int> Vector;
void printVector(const Vector& a) { 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 
//Position this line where user code will be pasted.
int main() { 
    int t;
    cin>>t;
    while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    Vector A,B,C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    
    for(int i=0;i<o;i++){
        int x;
        cin>>x;
        C.push_back(x);
    }
  
    printVector(mergeThree(A, B, C)); 
    
    }
   
    return 0; 
} 


/*This is a function problem.You only need to complete the function given below*/
// Function to merge three sorted arrays
// A, B, and C: input sorted arrays
Vector mergeThree(Vector& A, Vector& B, Vector& C) { 
    //Your code here
    int m,n,o,i,j,k;
    
    m = A.size();
    n = B.size();
    o = C.size();
    
    i = j = k = 0;
    
    Vector D;
    D.reserve(n+m+o);
    
    while(i <m && j < n && k < o){
        
        int temp = min(min(A[i],B[j]),C[k]);
        
        D.push_back(temp);
        
        if(temp == A[i]){
            i++;
        }else if(temp == B[j]){
            j++;
        }else{
            k++;
        }
    }
    
    while(i<m && j < n){
        if(A[i] <= B[j]){
            D.push_back(A[i]);
            i++;
        }else{
            D.push_back(B[j]);
            j++;
        }
    }
    
    while(i<m && k < o){
        if(A[i] <= C[k]){
            D.push_back(A[i]);
            i++;
        }else{
            D.push_back(C[k]);
            k++;
        }
    }
    
    while(j<n && k < o){
        if(B[j] <= C[k]){
            D.push_back(B[j]);
            j++;
        }else{
            D.push_back(C[k]);
            k++;
        }
    }
    
     while (i < m){ 
        D.push_back(A[i++]);
     }
     
     while (j < n) {
        D.push_back(B[j++]); 
     }
     
     while (k < o){
        D.push_back(C[k++]); 
     }
     
     return D;
} 
