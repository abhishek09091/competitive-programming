#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	  
	  int n,k;
	  cin>>n>>k;
	  int arr[n];
	  
	  for(int i=0; i<n; i++){
	      cin>>arr[i];
	  }
	  
	  sort(arr,arr + n);
	  
	  long long sum = 0;
	  for(int i=0; i<k ;i++){
	      sum += arr[i];
	  }
	  
	  cout<<sum<<endl;
	}
	return 0;
}