#include<bits/stdc++.h>

using namespace std;

bool is_perfect(int n){
	
	if ((sqrt(n) - floor(sqrt(n))) != 0) 
            return false; 
    return true; 
}

int get_nearest_perfect_square(int n){
	
	int prev = -1;
	int next = -1;
	int n1 = n+1;
	
	while(true){
		if(is_perfect(n1)){
			next = n1;
			break;
		}else{
			n1++;
		}
	}
	
	n1 = n - 1;
	
	while(true){
		if(is_perfect(n1)){
			prev = n1;
			break;
		}else{
			n1--;
		}
	}
	
	int diff_1 = next - n;
	int diff_2 = n - prev;
	
	if(diff_1 == diff_2){
		return next;
	}else if(diff_1 > diff_2){
		return prev;
	}else{
		return next;
	}
	
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<get_nearest_perfect_square(n)<<endl;
	}
	
	return 0;
}