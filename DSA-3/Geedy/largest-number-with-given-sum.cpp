/*********

https://www.geeksforgeeks.org/find-the-largest-number-with-given-number-of-digits-and-sum-of-digits/

*******/

#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum;
		cin>>n>>sum;
		cout<<largestNumber(n, sum)<<endl;
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
// Function to return Largest Number
string largestNumber(int n, int sum){
    // Your code here

    
    if(sum > 9*n){
        return "-1";
    }
    
    string res = "";
    
    for(int i=0; i<n; i++){
        
        if(sum >= 9){
            res = res + "9";
        }else if(sum < 0){
            res = res + "0";
        }else{
            res = res + to_string(sum);
        }
        
        sum = sum - 9;
    }
    
    return res;
}