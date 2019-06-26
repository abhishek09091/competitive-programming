/***

https://www.geeksforgeeks.org/pigeonhole-sort/

***/

#include<bits/stdc++.h>

using namespace std;

void pigeon_hole_sort(int arr[],int n){
	
	int min = INT_MAX;
	int max = INT_MIN;
	
	for(int i=0; i<n; i++){
		
		if(arr[i] < min){
			min = arr[i];
		}
		
		if(arr[i] > max){
			max = arr[i];
		}
	}
	
	int range = max - min + 1;
	
	vector<int> holes[range];
	
	for(int i=0; i<n; i++){
		holes[arr[i] - min].push_back(arr[i]);
	}
	
	int index = 0;
	for(int i=0; i<range; i++){
		
		vector<int>:: iterator it;
		for(it = holes[i].begin(); it != holes[i].end(); it++){
			
			arr[index++] = *it;
		}
	}
}

int main(){
	
	int t;
	
	cin>>t;
	
	while(t--){
		
		int n;
		cin>>n;
		
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		
		pigeon_hole_sort(arr,n);
		
		for(int i=0; i<n; i++){
			cout<<arr[i]<<" ";
		}
		
		cout<<endl;
	}
	
	return 0;

}