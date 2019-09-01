#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        func(A);
        
    }
}	

/*This is a function problem.You only need to complete the function given below*/

void funcutil(vector<int> A, int index, vector<int> current, vector<vector<int>> &result){
    
    // if all elements are iterated then store current vector in result
    if(index>=A.size()){
        result.push_back(current);
        return;
    }
    
    // checking for duplicate elements
    int curIndex=index+1;
    while(curIndex<A.size() && A[curIndex]==A[index]){
        curIndex++;
    }
    
    int count = curIndex - index;
    
    // insert in current all the subsets 
    for(int i=0;i<=count;i++){
        for(int j=0;j<i;j++){
            current.push_back(A[index]);
        }
        // recurse for adding further subsets
        funcutil(A, curIndex, current, result);
        for(int j=0;j<i;j++){
            // backtrack to exclude current combintaions and include further combinations
            current.pop_back();
        }
    }
}

void func(vector<int> A){
    sort(A.begin(),A.end());
        vector<vector<int> > result;
        vector<int> current;
        
        funcutil(A, 0, current, result);    
        
        // sorting for acsending output
        sort(result.begin(),result.end());
        
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
}
