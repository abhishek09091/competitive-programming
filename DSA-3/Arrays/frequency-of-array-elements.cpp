/****

https://www.geeksforgeeks.org/count-frequencies-elements-array-o1-extra-space-time/

*****/

/*This is a function problem.You only need to complete the function given below*/
// Function to count frequencies of elements in the array
// arr: input array
// n: size of array
void printfrequency(int arr[], int n){ 
	// Your code here
	
	//making in the range of 0 to n-1
	for(int i=0; i<n; i++){
	    arr[i] -= 1;
	}
	
	//making in the range 
	for(int i=0; i<n; i++){
	    
	    arr[arr[i] % n] = arr[arr[i] % n] + n;
	}
	
	for(int i=0; i<n; i++){
	    cout<<arr[i]/n<<" ";
	}
	
	return;
} 
