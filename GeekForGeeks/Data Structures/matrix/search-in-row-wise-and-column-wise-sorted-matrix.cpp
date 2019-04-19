/**

https://www.geeksforgeeks.org/search-in-row-wise-and-column-wise-sorted-matrix/

Given an n x n matrix and a number x, find the position of x in the matrix if it is present in it. Otherwise, print “Not Found”. 
In the given matrix, every row and column is sorted in increasing order. The designed algorithm should have linear time complexity.

Input :
2

4 4
10 20 30 40
15 25 35 45
27 29 37 48
32 33 39 50
29

4 4
10 20 30 40
15 25 35 45
27 29 37 48
32 33 39 50
100

**/

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	int t;
	cin>>t;
	
	while(t--){
		int row,col;
		cin>>row>>col;
		
		int matrix[row][col];
		
		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
				int temp;
				cin>>temp;
				matrix[i][j] = temp;
			}
		}
		int search;
		cin>>search;
		
		int n = 0;
		int m = col - 1;
		
		bool flag = false;
		while(n < row && m >= 0){
			
			if(matrix[n][m] == search){
					
				flag = true;
				break;				
			}else if(matrix[n][m] > search){
				m--;
			}else{
				n++;
			}
		}
		
		if(flag){
			cout<<"Found at: [ "<<n<<" , "<<m<<" ] = "<<matrix[n][m]<<endl;
		}else{
			cout<<"Not Found"<<endl;
		}
	}
	
	return 0;
}