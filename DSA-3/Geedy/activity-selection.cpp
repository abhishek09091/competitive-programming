/**********

https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/

*********/

#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int start[n], end[n];
        
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        
        cout << activitySelection(start, end, n) << endl;
    }
    return 0;
}


/*This is a function problem.You only need to complete the function given below*/

struct Activity {
    
    int start, finish; 
}; 

bool comparision(Activity a,Activity b){
    
    return (a.finish < b.finish);
}

int activitySelection(int start[], int end[], int n){
    
    Activity arr[n];
    
    for(int j=0; j<n; j++){
        arr[j].start = start[j];
        arr[j].finish = end[j];
    }
    
    sort(arr,arr+n,comparision);
    
    /*for(int j=0; j<n; j++){
        cout<<"start : "<<arr[j].start<<" finish: "<<arr[j].finish<<endl;
    }
    cout<<endl;*/
    
    // Your code here
    int i = 0;
    int count = 1;
    
    for(int j=1; j<n; j++){
        
        if(arr[i].finish <= arr[j].start){
            count++;
            i = j;
        }
    }
    
    return count;
}