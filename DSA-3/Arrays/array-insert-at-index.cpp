/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// You need to insert the given element at the given index. 
// After inserting the elements at index, elements
// from index onward should be shifted one position ahead
// You may assume that the array already has sizeOfArray - 1
// elements.
void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
{
    //Your code here
    for(int i=sizeOfArray - 1; i> index; i--){
      arr[i] = arr[i-1];  
    }
    
    arr[index] = element;
    return;
    
}
