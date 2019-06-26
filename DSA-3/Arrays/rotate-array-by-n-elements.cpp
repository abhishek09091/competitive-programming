/***

https://www.geeksforgeeks.org/array-rotation/

***/

int cal_gcd(int a,int b){
    
    if(b == 0){
        return a;
    }else{
        return cal_gcd(b, a%b);
    }
}

void rotateArr(int arr[], int d, int n){
    
   // Your code here
   
   int gcd = cal_gcd(d,n);
   
   for(int i=0; i<gcd; i++){
       
       int temp = arr[i];
       int j = i;
       while(1){
           int k = j + d;
           
           if(k>= n){
               k = k - n ;
           }
           
           if(k == i){
               break;
           }
           
           arr[j] = arr[k];
           j = k;
       }
       arr[j] = temp;
   }
    return;
}
