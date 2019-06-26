#include <bits/stdc++.h>
using namespace std;

void repeatedNumber(vector<int> A) {
    long long int act_sum = 0;
    long long int act_sum_sq = 0;
    long long int exp_sum;
    long long int exp_sum_sq;
    long long int i = 0;
    
    for(i = 0; i < A.size(); i++){
        act_sum = act_sum + (long long int)A[i];
        act_sum_sq = act_sum_sq + (long long int)A[i]*A[i];
    }
    
    exp_sum = (long long int)(A.size())*(A.size()+1)/2;
    exp_sum_sq = (long long int)(A.size())*(A.size()+1)*(2*A.size()+1)/6;
    
    long long int diff_sum_sq = exp_sum_sq - act_sum_sq;
    long long int diff_sum = exp_sum - act_sum;
    
    long long int tog = diff_sum_sq/diff_sum;
    
    long long int mis = (tog + diff_sum)/2;
    long long int rep = mis - diff_sum;
    
    cout<<(int)rep<<" "<<(int)mis<<endl;

    return ;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> vec;
	    
	    for(int i=0; i<n; i++){
	        int temp;
	        cin>>temp;
	        vec.push_back(temp);
	    }
	    repeatedNumber(vec);
	}
	return 0;
}