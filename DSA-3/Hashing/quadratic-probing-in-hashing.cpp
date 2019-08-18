
#include <bits/stdc++.h>
using namespace std;
void QuadraticProbing(int hash[],int hashSize,int arr[],int sizeOfArray);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    int hash[hashSize];
	    
	    
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    
	    for(int i=0;i<hashSize;i++)
	    hash[i]=-1;
	    
	    QuadraticProbing( hash, hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/

void QuadraticProbing(int hash[],int hashSize,int arr[],int sizeOfArray){
    //Your code here
    
    for(int i=0; i<sizeOfArray; i++){
        
        int temp = arr[i] % hashSize;
        
        if(hash[temp] == -1){
            
            hash[temp] = arr[i];
            
        }else{
            
            for(int j=1; j<hashSize; j++){
                
                int k = (temp + (j*j)) % hashSize;
                
                if(hash[k] == -1){
                    hash[k] = arr[i];
                    break;
                }
            }
            
        }
    }
    
    return;
}