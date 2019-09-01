/*********

https://www.geeksforgeeks.org/combinational-sum/

*******/

include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        vector<vector<int> > result;
   		result=combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"
";
    }
}	

/*This is a function problem.You only need to complete the function given below*/

void findNumbers(vector<int>& A,int sum,vector<vector<int>>& res,vector<int>& r,int i){
    
    if(sum < 0){
        return;
    }
    
    if(sum == 0){
        res.push_back(r);
        return;
    }
    
    while(i < A.size() && sum - A[i] >= 0){
        
        r.push_back(A[i]);
        
        findNumbers(A,sum - A[i],res,r,i);
        i++;
        
        r.pop_back();
    }
}

vector<vector<int> > combinationSum(vector<int> &A, int B) {
    // Your code here
    sort(A.begin(),A.end());
    A.erase(unique(A.begin(),A.end()),A.end());
    
    vector<int> r;
    vector<vector<int>> res;
    
    findNumbers(A,B,res,r,0);
    
    return res;
    
}