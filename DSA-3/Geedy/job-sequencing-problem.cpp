
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 
// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 
//Position this line where user code will be pasted.
// Driver program to test methods 
int main() 
{ 
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        Job arr[n];
        
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        printJobScheduling(arr, n);
    }
	return 0; 
}


/*This is a function problem.You only need to complete the function given below*/
// Prints minimum number of platforms reqquired 

bool comparision(Job a , Job b){
    
    return (a.profit > b.profit);
}

void printJobScheduling(Job arr[], int n) { 
    // your code here
    
    sort(arr,arr+n,comparision);
    
    int result[n];
    bool slot[n];
    
    for(int i=0; i<n; i++){
        slot[i] = false;
    }
    
    for(int i=0; i<n; i++){
        
        for(int j=min(n,arr[i].dead)-1; j>=0; j--){
            
            if(slot[j] == false){
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    
    int sum = 0;
    int count = 0;
    
    for(int i=0; i<n; i++){
        
        if(slot[i]){
            count++;
            sum += arr[result[i]].profit;
        }
    }
    
    cout<<count<<" "<<sum<<endl;
    return;
} 
