/**

https://stackoverflow.com/questions/28318770/mirror-image-of-a-2d-array

Print the mirror matrix of the given matrix

Input:

1  2  6
3  4  8

Output:

6  2  1
8  4  3

**/

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		int row,col,temp;
		cin>>row>>col;
		
		int mat[row][col];
		
		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
				cin>>temp;
				mat[i][j] = temp;
			}
		}
		
		for(int i=0; i<row; i++){
			for(int j=col-1; j>=0; j--){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	return 0;
}