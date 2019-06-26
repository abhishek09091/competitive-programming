#include<bits/stdc++.h>

using namespace std;

int max_pieces(int n,int a,int b,int c){
	
	if(n < 0){
		return -1;
	}
	
	if(n == 0){
		return 0;
	}
	
	int res = max({max_pieces(n-a,a,b,c),
				  max_pieces(n-b,a,b,c),
	max_pieces(n-c,a,b,c)});
	
	
	if(res == -1){
		return -1;
	}else{
		return res + 1;
	}
	
	
	
}

int main(){

	int t;
	cin>>t;
	
	while(t--){
		int n,a,b,c;
		cin>>n>>a>>b>>c;
		
		cout<<max_pieces(n,a,b,c)<<endl;
	}
	return 0;
}