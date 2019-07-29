/******

https://www.geeksforgeeks.org/majority-element/

*******/

/*This is a function problem.You only need to complete the function given below*/
// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size){
    
    // your code here
    int maj_index = 0 , count = 1;
    
    for(int i=1; i<size; i++){
        
        if(a[maj_index] == a[i]){
            count++;
        }else{
            count--;
        }
        
        if(count == 0){
            maj_index = i;
            count = 1;
        }
    }
    count = 0;
    for(int i=0; i<size; i++){
        if(a[i] == a[maj_index]){
            count++;
        }
    }
    
    if(count > size/2){
        return a[maj_index];
    }
    
    return -1;
    
}