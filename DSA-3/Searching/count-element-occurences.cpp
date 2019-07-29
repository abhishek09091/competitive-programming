/**********

https://www.geeksforgeeks.org/given-an-array-of-of-size-n-finds-all-the-elements-that-appear-more-than-nk-times/

***********/


/*This is a function problem.You only need to complete the function given below*/
// Function to find element with count more than n/k times
// arr: input array

struct elementCount{
    
    int e;
    int c;
    
};

int countOccurence(int arr[], int n, int k){
    //Your code here
    if(k < 2){
        return 0;
    }
    
    struct elementCount temp[k-1];
    
    for(int i=0; i<k-1; i++){
        temp[i].c = 0;
    }
    
    for(int i=0; i<n; i++){
        
        int j;
        
        for(j=0; j<k-1; j++){
            
            if(temp[j].e == arr[i]){
                temp[j].c += 1;
                break;
            }
        }
        
        if(j == k-1){
            
            int l;
            
            for(l=0; l<k-1; l++){
                
                if(temp[l].c == 0){
                    temp[l].e = arr[i];
                    temp[l].c = 1;
                    break;
                }
            }
            
            if(l == k-1){
                for(l=0; l<k-1; l++){
                    temp[l].c -= 1;
                }
            }
        }
    }
    
    int count = 0;
    for(int i=0; i<k-1; i++){
        
        int ac = 0;
        for(int j=0; j<n; j++){
            if(arr[j] == temp[i].e){
                ac++;
            }
        }
        
        if(ac > n/k){
            count++;
        }
    }
    
    return count;
}