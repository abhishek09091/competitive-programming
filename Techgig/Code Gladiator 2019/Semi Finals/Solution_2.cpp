#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		int phases , states,temp;
		cin>>phases>>states;
		int s_count = 0, p_count = 0 , s_sum = 0, p_sum = 0;
		
		vector<int> p ;
		vector<int> s;
		
		for(int i=0; i<phases; i++){
			cin>>temp;
			p.push_back(temp);
			if(p[i]>0){
				p_count++;
				p_sum += p[i];
			}
		}
		
		for(int i=0; i<states; i++){
			cin>>temp;
			s.push_back(temp);
			if(s[i]>0){
				s_count++;
				s_sum += s[i];
			}
		}
		
		if(s_sum != p_sum){
			cout<<"NO"<<endl;
			continue;
		}
		
		int count = 0, min_index = 0;
		if(s_count <= p_count){
			
			sort(s.begin(),s.end());
			sort(p.begin(),p.end(),greater<int>());
			for(int i=0; i<s.size(); i++){
				
				if(s[i] != 0){
					break;
				}
				min_index++;
			}
			
			for(int i=0; i<phases; i++){
				
				if(p[i] == 0){
					break;
				}
				
				if(p[i] > s_count){
					break;
				}else{
					s_sum -= p[i];
					if(p[i] == s_count){
						count++;
						int res = s[min_index] - count;
						if(res == 0){
							s_count--;
							s[min_index] = 0;
							min_index++;
						}
					}
				}
			}
			
			if(s_sum == 0){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}else{
			sort(p.begin(),p.end());
			sort(s.begin(),s.end(),greater<int>());
			for(int i=0; i<p.size(); i++){
				if(p[i] != 0){
					break;
				}
				min_index++;
			}
			
			for(int i=0; i<states; i++){
				if(s[i] == 0){
					break;
				}
				
				if(s[i] > p_count){
					break;
				}else{
					p_sum -= s[i];
					if(s[i] == p_count){
						count++;
						int res = p[min_index] - count;
						if(res == 0){
							p_count--;
							p[min_index] = 0;
							min_index++;
						}
					}
				}
				
				if(p_sum == 0){
					cout<<"YES"<<endl;
				}else{
					cout<<"NO"<<endl;
				}
			}
		}
	}
	
	return 0;
}