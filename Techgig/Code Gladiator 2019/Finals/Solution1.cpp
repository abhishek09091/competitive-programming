#include<bits/stdc++.h>

using namespace std;

set<string> subString(string str, int n)  { 
    // Pick starting point 
	set<string> res;
	for (int i = 0; i < n; i++)  
       for (int len = 1; len <= n - i; len++) 
            res.insert(str.substr(i, len)); 

	return res;
}


int findingUniqueCharacters(string input) {
		set<char> count;
		
		for(int i=0; i<input.length(); i++) {
			count.insert(input[i]);
		}
		
		return count.size();
}

int main(){
	
	int n,q;
	cin>>n>>q;
	
	string str;
	cin>>str;
	set<string> res = subString(str,n);
	vector<string> vec ;
	for (auto it=res.begin(); it != res.end(); ++it){ 
		vec.push_back(*it);
	}
	sort(vec.begin(),vec.end());
	while(q--){
		int temp;
		cin>>temp;
		
		if(temp > vec.size()){
			cout<<"-1"<<endl;
		}else{
			cout<<vec[temp-1]<<endl;
		}
	}

}