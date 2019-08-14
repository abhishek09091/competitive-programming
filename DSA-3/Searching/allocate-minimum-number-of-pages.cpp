/*********

https://www.geeksforgeeks.org/allocate-minimum-number-pages/

*************/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

bool isValid(ll books[],ll n,ll k,ll ans){
    ll students = 1;
    ll current_pages = 0;
    
    for(ll i=0; i<n; i++){
        
        if(current_pages + books[i] > ans){
            current_pages = books[i];
            students++;
            if(students > k){
                return false;
            }
        }else{
            current_pages += books[i];
        }
    }
    
    return true;
}

ll binarySearchBooks(ll books[],ll n, ll k){
    
    
    ll sum = 0;
    ll s = 0 ;
    
    
    
    if (k > n) 
        return -1; 
        
    
    for(ll i=0; i<n; i++){
        sum += books[i];
        s = max(s,books[i]);
    }
    ll e = sum;
    ll res = s;
    while(s<=e){
        
        ll mid = (e + s)/2;
        
        if(isValid(books,n,k,mid)){
            res = mid;
            e = mid - 1;
            
        }else{
            s = mid + 1;
        }
    }
    
    return res;
}

int main() {
	//code
	ll t;
	cin>>t;
	
	while(t--){
	  ll n;
	  cin>>n;
	  
	  ll books[n];
	  
	  for(ll i=0; i<n; i++){
	      cin>>books[i];
	  }
	  
	  ll k;
	  cin>>k;
	  cout<<binarySearchBooks(books,n,k)<<endl;
	}
	return 0;
}