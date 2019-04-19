/**

https://www.geeksforgeeks.org/sort-matrix-row-wise-column-wise/

Given a n x n matrix. The problem is to sort the matrix row-wise and column wise


Input :

2
3 3
4 1 3
9 6 8
5 2 7

4 4
12 7 1 8
20 9 11 2
15 4 5 13
3 18 10 6 

Output:

1 3 4 
2 5 7 
6 8 9 


1 5 8 12 
2 6 10 15 
3 7 11 18 
4 9 13 20 

**/

#include<bits/stdc++.h>
#define pb push_back
#define MAX_SIZE 10
using namespace std;


int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		int n,m;
		cin>>n>>m;
		int matrix[n][m];
		
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				int element;
				cin>>element;
				matrix[i][j] = element;
			}
		}
		
		
		//sort the matrix row wise
		for(int i=0; i<n; i++){
			sort(matrix[i],matrix[i]+m);
		}	
		
		//transpose the matrix
		for(int i=0; i<n; i++){
			for(int j=i+1; j<m; j++){
				swap(matrix[i][j],matrix[j][i]);
			}
		}
		
		//sort the matrix row wise
		for(int i=0; i<n; i++){
			sort(matrix[i],matrix[i]+m);
		
		}
		
		//transpose the matrix
		for(int i=0; i<n; i++){
			for(int j=i+1; j<m; j++){
				swap(matrix[i][j],matrix[j][i]);
			}
		}
		
		//print the output
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cout<<matrix[i][j]<<" ";
			}
			cout<<endl;
		}
		
	}
	
	
	return 0;
	
}