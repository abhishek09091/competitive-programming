/*******

https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/


******/

/*This is a function problem.You only need to complete the function given below*/
void max_of_subarrays(int *arr, int n, int k){
    // your code here
    
    deque<int> q;
    
    for(int i=0; i<k ; i++){
        
        while((!q.empty()) && arr[i] >= arr[q.back()]){
            q.pop_back();
        }
        
        q.push_back(i);
    }
    
    for(int i=k; i<n; i++){
        
        cout<<arr[q.front()]<<" ";
        
        while((!q.empty()) && q.front() <= i - k){
            q.pop_front();
        }
        
        while((!q.empty()) && arr[i] >= arr[q.back()]){
            q.pop_back();
        }
        
         q.push_back(i);
    }
    
    cout<<arr[q.front()]<<" ";
    return;
}
