/***********

https://www.geeksforgeeks.org/counting-sort/

************/


// C Program for counting sort
#include <stdio.h>
#include <string.h>
#define RANGE 255
// The main function that sort the given string arr[] in
// alphabatical order
void countSort(char arr[]);
// Driver program to test above function
int main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        char arr[n+1];
        scanf("%s",arr);
        countSort(arr);
    printf("%s
", arr);
    }return 0;
}


/*This is a function problem.You only need to complete the function given below*/
// The main function that sort the given string arr[] in
// alphabatical order
#define RANGE 255
void countSort(char arr[]){
// Your code goes here
    char output[strlen(arr)];
    
    int count[RANGE + 1];
    memset(count,0,sizeof(count));
    
    for(int i=0; arr[i]; i++){
        ++count[arr[i]];
    }
    
    for(int i=1; i<=RANGE; i++){
        count[i] += count[i-1];
     }
     
     for(int i=0; arr[i]; i++){
         output[count[arr[i]] - 1] = arr[i];
         --count[arr[i]];
     }
     
     for(int i=0; arr[i]; i++){
         arr[i] = output[i];
     }
     
     return;
}