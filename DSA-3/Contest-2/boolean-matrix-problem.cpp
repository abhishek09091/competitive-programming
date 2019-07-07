#include <bits/stdc++.h>
using namespace std;

/****

Algorithm :

1. figure out the first 1 in the row  and set the first element of that row to 1

2. traverse the complete matrix before that check if first element of the row is 1 or not if not then break else fill complete row with one

3. Print the desired matrix 

***/

int main() {
	//code
	int t;
	cin>>t;
	
	//number of test cases
	while(t--){
	    int r,c,temp;
	    int i,j;
	    cin>>r>>c;
	    
	   //matrix to store the values
	   int mat[r][c];
	    
	    for(i=0; i<r; i++){
	        for(j=0; j<c; j++){
	            cin>>temp;
	            mat[i][j] = temp;
	        }
	    }
	    
	    //figure out the first one in the row or col and set the first element of the row to 1;
	    for(int i=0; i<r; i++){
	        for(int j = 0; j<c; j++){
	            if(mat[i][j]){
	                mat[i][0] = 1;
					break;
	            }
	        }
	    }
	    
	    
	   for (i = 0; i < r; i++) { 
        for (j = 0; j < c; j++) { 
				if (mat[i][0] == 1) { 
                    mat[i][j] = 1;
                }else{
					break;
				} 
            } 
        }
	    
	    
	    for(int i=0; i<r; i++){
	        for(int j=0; j<c; j++){
	            cout<<mat[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}