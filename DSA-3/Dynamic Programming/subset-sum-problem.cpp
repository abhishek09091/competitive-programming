/********

https://www.geeksforgeeks.org/partition-problem-dp-18/
https://www.educative.io/collection/page/5668639101419520/5633779737559040/5752754626625536

********/
#include <iostream>
using namespace std;

bool checkParition(int arr[],int n,int sum){
    
    if((sum % 2) != 0){
        return false;
    }
    
    bool part[(sum/2) + 1][n+1];
    
    for(int i=0; i<=n; i++){
        part[0][i] = true;
    }
    
    for(int i=1; i<=sum/2; i++){
        part[i][0] = false;
    }
    
    for(int i=1; i<= sum/2; i++){
        
        for(int j=1; j<=n; j++){
            part[i][j] = part[i][j-1];
            
            if(i >= arr[j-1]){
                part[i][j] = part[i][j] || part[i - arr[j-1]][j-1];
            }
        }
    }
    
    return part[sum/2][n];
    
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int sum = 0;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        sum += arr[i];
	    }
	    
	    if(checkParition(arr,n,sum) == true){
	        cout<<"YES";
	    }else{
	        cout<<"NO";
	    }
	    
	    cout<<endl;
	}
	return 0;
}