void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap_with(int num,vector<int> &A,int i){
    
    int min = A[i];
    int index = i, j = i;
    
    for(j=i; j<A.size(); j++){
        if(min > A[j] && A[j] > A[num]){
            index = j;
            min = A[j];
        }
    }
    
    swap(A[index],A[num]);
}

void Solution::nextPermutation(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int flag = 0;
    
    for(int i=A.size()-1; i>0; i--){
        
        if(A[i] > A[i-1]){
           swap_with(i-1,A,i);
           sort(A.begin()+i,A.end());
           flag = 1;
           break; 
        }
    }
    
    
    if(flag == 0){
        sort(A.begin(),A.end());
    }
}
