bool checkRotatedAndSorted(int a[], int n){
    
    int minInd=0,maxInd=0;
	    for(int i=0;i<n;i++){
	        
	        if(a[i] < a[minInd])
	            minInd = i;
	        else if(a[i] > a[maxInd])
	            maxInd = i;
	    }
	    
	    //not sorted and rotated
	    if(abs(minInd - maxInd) != 1){
	     
	        return false;
	        
	    }
	    
	    //increasing order or decreasing order
	    
	    bool sorted = true;
        if(maxInd < minInd){
    	    
    	    for(int i=0;i<n-1;i++){
    	        
    	        if(a[(minInd+i)%n] > a[(minInd+i+1)%n]){
    	         
    	            sorted = false;
    	            break;
    	        }
    	    }
        }else{
	        
	        for(int i=0;i<n-1;i++){
    	        
    	        if(a[(minInd+n-i)%n] > a[(minInd+n-i-1)%n]){
    	         
    	            sorted = false;
    	            break;
    	        }
    	    }
	    }
	    if(sorted){
	        return true;
	    }else{
	        return false;
	    }
	    
}