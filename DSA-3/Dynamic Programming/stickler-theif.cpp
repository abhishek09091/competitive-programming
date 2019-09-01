/*******

https://www.geeksforgeeks.org/find-maximum-possible-stolen-value-houses/

*******/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//Position this line where user code will be pasted.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;++i)
			cin>>a[i];
		cout<<FindMaxSum(a,n)<<endl;
	}
	return 0;
}


/*This is a function problem.You only need to complete the function given below*/
// Function to return maximum of sum without adjacent elements
ll FindMaxSum(ll arr[], ll n){
    // Your code here
    
    if(n == 0){
        return 0;
    }
    
    ll value1 = arr[0];
    
    if(n == 1){
        return value1;
    }   
    
    ll value2 = max(arr[0],arr[1]);
    
    if(n == 2){
        return value2;
    }
    
    ll max_value;
    
    for(ll i=2; i<n; i++){
        
        max_value = max(value1 + arr[i],value2);
        value1 = value2;
        value2 = max_value;
    }
    
    return max_value;
}
