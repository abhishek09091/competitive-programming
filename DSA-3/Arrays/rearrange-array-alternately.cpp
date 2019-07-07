/***

https://www.geeksforgeeks.org/rearrange-array-maximum-minimum-form-set-2-o1-extra-space/

****/

/*This is a function problem.You only need to complete the function given below*/
// This function wants you to modify the given input
// array and no need to return anything
// arr: input array
// n: size of array
void rearrange(int *arr, int n) 
{ 
	
	// Your code here
	int max_index = n - 1, min_index = 0;
	
	int max_element = arr[n-1] + 1;
	
	for(int i=0; i<n; i++){
	    
	    if(i%2 == 0){
	        
	        arr[i] += (arr[max_index] % max_element) * max_element;
	        max_index--;
	    }else{
	        arr[i] += (arr[min_index] % max_element) * max_element;
	        min_index++;
	        
	    }
	}
	
	for(int i=0; i<n; i++){
	    arr[i] = arr[i]/max_element;
	}
	
	return;
}