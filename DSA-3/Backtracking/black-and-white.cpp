{
#include <iostream>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int m,n;
	    cin>>m>>n;
	    cout<<solve(m,n)<<endl;
	}
	return 0;
}


/*This is a function problem.You only need to complete the function given below*/
bool isSafe(int x,int y,int m,int n){
    
    if(x<0 || x>=m || y<0 || y>=n){
        return false;
    }
    
    return true;
}

unsigned long long solve(int m,int n){
    // Your code here
    unsigned long long num = m * n*((m*n)-1);
    
    pair<int,int> ap[] = {{-2,-1},{-1,-2},{1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1}};
    
    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            for(pair<int,int> p: ap){
                if(isSafe(i+p.first,j+p.second,m,n)){
                    num--;
                }
            }
        }
    }
    
    return num;
}