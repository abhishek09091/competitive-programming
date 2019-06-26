int minAdjDiff(int arr[], int n){    
    // Your code here
    int min_adj_diff = INT_MAX;
    for(int i=1; i<n; i++){
        
        if((arr[i] < 0 && arr[i-1] < 0) || (arr[i] >= 0 && arr[i-1] >= 0) ){
            
            int temp = abs(abs(arr[i]) - abs(arr[i-1]));
            
            if(temp < min_adj_diff){
                min_adj_diff = temp;
            }
        }else if((arr[i] <= 0 && arr[i-1] >= 0) || (arr[i] >= 0 && arr[i-1] <= 0)){
            int temp = abs(arr[i]) + abs(arr[i-1]) ;
            
            if(temp < min_adj_diff){
                min_adj_diff = temp;
            }
        }
    }
    
      if((arr[0] < 0 && arr[n-1] < 0) || (arr[0] >= 0 && arr[n-1] >= 0) ){
            
            int temp = abs(abs(arr[0]) - abs(arr[n-1]));
            
            if(temp < min_adj_diff){
                min_adj_diff = temp;
            }
        }else if((arr[0] <= 0 && arr[n-1] >= 0) || (arr[0] >= 0 && arr[n-1] <= 0)){
            int temp = abs(arr[0]) + abs(arr[n-1]) ;
            
            if(temp < min_adj_diff){
                min_adj_diff = temp;
            }
        }
    
    return min_adj_diff;
}