/*This is a function problem.You only need to complete the function given below*/
int maxStep(int arr[], int n){
    
    int max_count = 0;
   //Your code here
   for(int i=0; i<n; i++){
       
       int temp = 0;
       while(i<n-1 && arr[i] < arr[i+1]){
           temp++;
           i++;
       }
       
       if(temp > max_count){
           max_count = temp;
       }
   }
   
   return max_count;
}