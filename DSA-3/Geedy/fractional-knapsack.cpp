/*********

https://www.geeksforgeeks.org/fractional-knapsack-problem/

********/
#include <bits/stdc++.h>
using namespace std;
struct Item{
    int value;
    int weight;
};
//Position this line where user code will be pasted.
int main()
{
	int t;
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		cout<<fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}

/*This is a function problem.You only need to complete the function given below*/

//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
// function to return fractionalweights
bool comparision(Item a, Item b){
    
    double r1 = (double)(a.value)/(a.weight);
    double r2 = (double)(b.value)/(b.weight);
    
    return r1 > r2;
}

double fractionalKnapsack(int W, Item arr[], int n){
    // Your code here
    sort(arr,arr+n,comparision);
    
    int curWeight = 0;
    double finalValue = 0.0;
    
    for(int i=0; i<n; i++){
        
        if(curWeight + arr[i].weight <= W){
            curWeight += arr[i].weight;
            finalValue += arr[i].value;
        }else{
            int remain = W - curWeight;
            finalValue += arr[i].value * ((double)remain / arr[i].weight);
            break;
        }
    }
    
    return finalValue;
}