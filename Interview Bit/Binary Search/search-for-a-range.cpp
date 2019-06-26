int first(const vector<int> &A,int x,int low,int high,int n){
	
	if(high >= low){
		
		int mid = low + (high - low)/2;
		
		if( (mid == 0 || x > A[mid-1]) && (A[mid] == x)){
			return mid;
		}else if(x > A[mid]){
			return first(A,x,mid + 1,high,n);
		}else{
			return first(A,x,low,mid - 1,n);
		}
	}
	
	return -1;

}


int last(const vector<int> &A,int x,int low,int high,int n){
	
	if(high >= low){
		
		int mid = low + (high - low)/2;
		
		if((mid == n-1 || x < A[mid+1]) && A[mid] == x){
			return  mid;
		}else if(x < A[mid]){
			return last(A,x,low,mid - 1,n);
		}else{
			return last(A,x,mid+1,high,n);
		}
	}
	
	return -1;
}