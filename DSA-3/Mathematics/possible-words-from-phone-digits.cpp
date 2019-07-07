/***

https://www.geeksforgeeks.org/find-possible-words-phone-digits/

***/
#include <bits/stdc++.h>
#include <string>
using namespace std;
void possibleWords(int a[],int n);
int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	  possibleWords(a,N);
	   cout << endl;
	}
	
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//Complete this function

const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl", 
                               "mno", "pqrs", "tuv", "wxyz"}; 

void printWordsPossible(int arr[],int curr_digit,char output[],int n){
    
    if(curr_digit == n){
       printf("%s ",output);
       return;
    }
    
    for(int i=0; i<strlen(hashTable[arr[curr_digit]]); i++){
        
        output[curr_digit] = hashTable[arr[curr_digit]][i];
        printWordsPossible(arr,curr_digit+1,output,n);
        
        if(arr[curr_digit] == 0 || arr[curr_digit] == 1){
            return;
        }
        
    }
}

void possibleWords(int a[],int N){
    //Your code here
    char output[N + 1];
    output[N] = '\0';
    printWordsPossible(a,0,output,N);
    return;
}