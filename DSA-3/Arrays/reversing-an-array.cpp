/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// This function should reverse contents of
// arr[0..sizeOfArray-1]
void arrayReversal(int arr[],int sizeOfArray) 
{
   //Write your code here
   int temp ;
   for(int i=0,j=sizeOfArray-1; i<sizeOfArray/2; i++,j--){
       
       temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
   }
   return;
}