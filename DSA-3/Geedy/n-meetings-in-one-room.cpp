/********

http://ideone.com/RVWlcJ

*********/
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int start[n],end[n];
	    for(int i=0;i<n;i++)
	        cin>>start[i];
	    
	    for(int i=0;i<n;i++)
	        cin>>end[i];
	    
	    maxMeetings(start, end, n);
	    cout<<endl;
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
struct Meeting {
    int id,start,finish;
};
bool comparision(Meeting a, Meeting b){
    
    return (a.finish < b.finish);
}
void maxMeetings(int start[], int end[], int n){
    // Your code here
    
    Meeting arr[n];
    
    for(int i=0; i<n; i++){
        
        arr[i].id = i;
        arr[i].start = start[i];
        arr[i].finish = end[i];
    }
    
    sort(arr,arr+n,comparision);
    
    /*for(int i=0; i<n; i++){
        cout<<"id: "<<arr[i].id<<" start: "<<arr[i].start<<" finish: "<<arr[i].finish<<endl;
    }*/
    
    int j = 0;
    //int count = 1;
    cout<<arr[j].id + 1<<" ";
    for(int i=1; i<n; i++){
        
        if(arr[j].finish <= arr[i].start){
            cout<<arr[i].id + 1<<" ";
            j = i;
            //count++;
        }
    }
    //cout<<"count: "<<count<<endl;
   // cout<<endl;
    return;
}