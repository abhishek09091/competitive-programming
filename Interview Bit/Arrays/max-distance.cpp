int Solution::maximumGap(const vector<int> &A) {
    
  if(A.size() <= 1){
      return 0;
  }
  
  vector<int> min_vec(A.size(),0);
  
  vector<int> max_vec(A.size(),0);
  
  min_vec[0] = A[0];
  
  for(int i=1; i<A.size(); i++){
      min_vec[i] = min(min_vec[i-1],A[i]);
  }
  
  max_vec[A.size()-1] = A[A.size() -1];
  for(int j=A.size()-2; j>=0; j--){
      max_vec[j] = max(max_vec[j+1],A[j]);
  }
  
  
  int i = 0, j = 0;
  int ans = -1;
  
  
  while(i<A.size() && j<A.size()){
      
      if(max_vec[j] >= min_vec[i]){
          if(j-i > ans){
              ans = j-i;
          }
          j = j+ 1;
      }else{
          i = i+1;
      }
  }
  
  return ans;
}
