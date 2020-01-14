package easy;

public class Solution8 {
	
	 public void duplicateZeros(int[] arr) {
		 
		 int countZeores = 0;
		 
		 for(int i=0; i<arr.length; i++) {
			 
			 if(arr[i] == 0) countZeores++;
		 }
		 
		 int j = arr.length + countZeores - 1;
		 
		 for(int i = arr.length - 1;  j>=0  && i>=0 ;i--,j--) {
			 
			 if(arr[i] != 0) {
				 
				 if(j < arr.length) arr[j] = arr[i];
			 }else {
				 if(j < arr.length) arr[j] = arr[i];
				 j--;
				 if(j < arr.length) arr[j] = arr[i];
			 }
		 }
	 }

}
