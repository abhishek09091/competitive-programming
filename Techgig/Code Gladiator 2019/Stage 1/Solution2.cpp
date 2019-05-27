#include<bits/stdc++.h>
using namespace std;


void cal(vector<int> a_vec){
	int n = a_vec.size();
	
	
	vector<int> in_vec;
	vector<int> ex_vec;
	
	in_vec.push_back(a_vec[0]);
	ex_vec.push_back(0);
	
	for(int i=1; i<n; i++){
		
		in_vec.push_back(a_vec[i] + ex_vec[i-1]);
		
		int c_i_1 = ex_vec[i-1];
		int b_i_1 = in_vec[i-1];
		
		if(c_i_1 > b_i_1){
			ex_vec.push_back(c_i_1);
		}else{
			ex_vec.push_back(b_i_1);
		}
	}
	
	
	int j = n-1;
	int pre_max = 0;
	bool flag = false;
	while(j>=0){
	   
		if(ex_vec[j] == in_vec[j]){
			pre_max = a_vec[j];
			flag = true;
			j--;
		}else if(ex_vec[j] > in_vec[j]){
	        j--;
	    }else if(ex_vec[j] < in_vec[j]){
			if(flag){
				if(pre_max > a_vec[j]){
					cout<<pre_max;
				}else{
					cout<<a_vec[j];
				}
				pre_max = 0;
				flag = false;
			}else{
				cout<<a_vec[j];
			}
			j -= 2;
	    }
	    
	}
	cout<<endl;
	
}

int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		
		vector<int> a_vec;
		for(int i=0; i<n; i++){
			int temp;
			cin>>temp;
			a_vec.push_back(temp);
		}
		cal(a_vec);
		
	}
	
	return 0;
}