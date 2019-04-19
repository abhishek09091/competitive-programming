/**

Segregate the 0's and 1's in the same matrix


Input :

3

3 3
0 1 0
0 0 0
1 0 1

5 4
0 0 1 1
1 1 0 0
0 0 0 0
1 1 1 1
1 0 1 0

4 5
1 1 0 1 0
1 1 1 1 1
0 0 0 0 0
1 0 1 0 1




Output :

0 0 1 
0 0 0 
0 1 1

0 0 1 1 
0 0 1 1 
0 0 0 0 
1 1 1 1 
0 0 1 1

0 0 1 1 1 
1 1 1 1 1 
0 0 0 0 0 
0 0 1 1 1
**/

#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){

	int t;
	cin>>t;
	
	while(t--){
		
		int row,col;
		cin>>row>>col;
		
		//matrix intialization
		vector<vector<int>> matrix;
		
		//inserting the value in matrix
		for(int i=0; i<row; i++){
			vector<int> temp;
			for(int j=0; j<col; j++){
				int element;
				cin>>element;
				temp.pb(element);
			}
			matrix.pb(temp);
		}
		
		//logic for the segregation
		for(int i=0; i<row; i++){
			
			int n = 0;
			int m = col - 1;
			
			while(n<m){
				while(n<m && matrix[i][n] == 0){
					n++;
				}
				
				while(m>n && matrix[i][m] == 1 ){
					m--;
				}
				
				if(n<m){
					matrix[i][n] = 0;
					matrix[i][m] = 1;
				}
			}
		}
		
		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
				cout<<matrix[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}