/***

https://www.geeksforgeeks.org/leaders-in-an-array/

***/

vector<int> leaders(int arr[], int n){
    
    // Your code here
    
    /******************
     * You just need to complete this
     * function and return the vector
     * containing the leaders.
     * ***************/
     vector<int> res;
     res.push_back(arr[n-1]);
     for(int i=n-2; i>=0; i--){
         
         if(arr[i] >= res[res.size()-1]){
             res.push_back(arr[i]);
         }
     }
     
     for(int i=0,j = res.size()-1 ; i<res.size()/2; i++,j--){
         
         int temp = res[i];
         res[i] = res[j];
         res[j] = temp;
     }
     
     return res;
    
}