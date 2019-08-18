#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
#define pb push_back
#define for1(i,j,k) for(int i=j; i<k; i++)
#define for2(p,q,r) for(int p=q; p<r; p++)
#define vi vector<int>
#define mk make_pair
#define pii pair<int,int>
#define vpii vector<pii>
#define ulli unsigned long long int
#define ll long long
#define lli long long int
#define MOD 1000000007

int main(){
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int n1,n2,temp;
		cin>>n1>>n2;
		int arr1[n1];
		int arr2[n2];
		set<int> s;
		for1(i,0,n1){
			cin>>temp;
			s.insert(temp);
		}
		
		for1(i,0,n2){
			cin>>temp;
			s.insert(temp);
		}
		
		//for (auto it=s.begin(); it != s.end(); ++it) 
        cout <<s.size(); 
        
        cout<<endl;
		
	}
	
	return 0;
}