int findMinLength(vector<string> &arr, int n) { 
    int min = arr[0].length(); 
  
    for (int i=1; i<n; i++) 
        if (arr[i].length() < min) 
            min = arr[i].length(); 
  
    return(min); 
} 

string Solution::longestCommonPrefix(vector<string> &A) {
    
    int n = A.size();
    int minlen = findMinLength(A, n); 
  
    string result;  
    char current;   
  
    for (int i=0; i<minlen; i++) { 
        current = A[0][i]; 
  
        for (int j=1 ; j<n; j++) 
            if (A[j][i] != current) 
                return result; 
  
        result.push_back(current); 
    } 
  
    return (result);
}
