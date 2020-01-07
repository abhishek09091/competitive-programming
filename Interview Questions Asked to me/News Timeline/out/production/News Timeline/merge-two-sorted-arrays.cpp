/**********

https://www.geeksforgeeks.org/efficiently-merging-two-sorted-arrays-with-o1-extra-space/

*********/

#include <bits/stdc++.h>
using namespace std;

int nextGap(int gap){
    
    if(gap <= 1){
        return 0;
    }
    
    return (gap/2) + (gap%2);
}

void mergeTwoSortedArray(int v1[],int v2[],int m,int n){
    
   int i, j, gap = m + n;
   
   for(gap = nextGap(gap); gap > 0; gap = nextGap(gap)){
       
       //comparing elements in first array.
       for(i=0; i + gap<m; i++){
           if(v1[i] > v1[i+gap]){
               swap(v1[i],v1[i+gap]);
           }
       }
       
       //comparing elements in both the array
       for(j = gap > m ? gap - m : 0; i<m && j<n ;i++, j++){
           
           if(v1[i] > v2[j]){
               swap(v1[i],v2[j]);
           }
       }
       
       if(j<n){
            for(j=0; j+gap<n; j++){
                if(v2[j] > v2[j+gap]){
                    swap(v2[j],v2[j+gap]);
                }
            }   
       }
       
   }
   
}

int main() {
	//code
	int t,temp;
	cin>>t;
	
	while(t--){
	    
	    int m,n;
	    cin>>m>>n;
	    
	    int v1[m],v2[n];
	    
	    for(int i=0; i<m; i++){
	        cin>>v1[i];
	        
	    }
	    
	    for(int i=0; i<n; i++){
	        cin>>v2[i];
	        
	    }
	    
	    mergeTwoSortedArray(v1,v2,m,n);
	    
	    for(int i=0; i<m; i++){
	        cout<<v1[i]<<" ";
	    }
	    
	    for(int i=0; i<n; i++){
	        cout<<v2[i]<<" ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}