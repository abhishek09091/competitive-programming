package module2;


	//Initial Template for Java
	import java.util.*;
	import java.io.*;
	import java.lang.*;
	class GFG3
	{
	    public static void main(String args[])
	    {
	        Scanner sc = new Scanner(System.in);
	        int t =sc.nextInt();
	        
	        while(t-- > 0)
	        {
	            int r = sc.nextInt();
	            int c = sc.nextInt();
	            
	            int arr[][] = new int[r][c];
	            
	            for(int i = 0; i < r; i++)
	            {
	                for(int j = 0; j < c; j++)
	                arr[i][j] = sc.nextInt();
	            }
	            
	            new Geeks3().makeThemOne(arr, r, c);
	        }
	    }
	}
	//Position this line where user code will be pasted.

	
	/*This is a function problem.You only need to complete the function given below*/
	//User function Template for Java
	class Geeks3
	{
	    static void makeThemOne(int mat[][],int r,int c) {
	        //Your code here
	            boolean row_flag = false,col_flag = false;
	            
	            for(int i=0; i<r; i++){
		            for(int j = 0; j<c; j++){
		            
		                if(i == 0 && mat[i][j] == 1)
		                    row_flag = true;
		            
		                if(j==0 && mat[i][j] == 1)
		                    col_flag = true;
		               
		                if(mat[i][j] == 1){
		                    mat[i][0] = 1;
						    mat[0][j] = 1;
		                }
		            }
		        }
		        
		    for (int i = 1; i < r; i++) { 
	            for (int j = 1; j < c; j++) { 
					
					    if(mat[0][j] == 1 || mat[i][0] == 1){
					        mat[i][j] = 1;
					    } 
	            } 
	        }
		    
		    if(row_flag == true){
		        for(int i=0; i<r ; i++){
		            mat[i][0] = 1;
		        }    
		    }
		    
		    if(col_flag == true){
		        for(int i=0; i<c ; i++){
		            mat[0][i] = 1;
		        }    
		    }
		    
		    
		    for(int i=0; i<r; i++){
		        for(int j=0; j<c; j++){
		            System.out.print(mat[i][j]+" ");
		        }
		        System.out.println();
		    }
		    
		    return;
	    }
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    static void makeThemOne1(int mat[][],int R,int C) {
	        //Your code here
	        // in first row and column 
	    	int row[ ]= new int [R]; 
	        int col[ ]= new int [C]; 
	        int i, j; 
	      
	        /* Initialize all values of row[] as 0 */
	        for (i = 0; i < R; i++) 
	        { 
	        row[i] = 0; 
	        } 
	      
	      
	        /* Initialize all values of col[] as 0 */
	        for (i = 0; i < C; i++) 
	        { 
	        col[i] = 0; 
	        } 
	      
	      
	        /* Store the rows and columns to be marked as 
	        1 in row[] and col[] arrays respectively */
	        for (i = 0; i < R; i++) 
	        { 
	            for (j = 0; j < C; j++) 
	            { 
	                if (mat[i][j] == 1) 
	                { 
	                    row[i] = 1; 
	                    col[j] = 1; 
	                } 
	            } 
	        } 
	      
	        /* Modify the input matrix mat[] using the 
	        above constructed row[] and col[] arrays */
	        for (i = 0; i < R; i++) 
	        { 
	            for (j = 0; j < C; j++) 
	            { 
	                if ( row[i] == 1 || col[j] == 1 ) 
	                { 
	                    mat[i][j] = 1; 
	                } 
	            } 
	        } 
	        
	          for(i=0; i<R; i++){
			        for(j=0; j<C; j++){
			            System.out.print(mat[i][j]+" ");
			        }
			        System.out.println();
			    }
	    }
	    
	    
	    static void makeThemOne4(int arr[][],int r,int c)  {
	         int rows[]=new int[r];
	         int cols[]=new int[c];
	         
	         for(int i=0;i<r;i++)
	         {
	             for(int j=0;j<c;j++)
	             {
	                 if(arr[i][j]==1)
	                 {
	                     rows[i]=1;
	                     cols[j]=1;
	                 }
	             }
	         }
	         
	         for(int i=0;i<r;i++)
	         {
	             for(int j=0;j<c;j++)
	             {
	                 if(rows[i]==1)
	                 {
	                    arr[i][j]=1;
	                 }
	                 if(cols[j]==1)
	                 {
	                    arr[i][j]=1;
	                 }
	             }
	         }
	         
	         
	         
	         for(int i=0;i<r;i++){
	             for(int j=0;j<c;j++){
	                 System.out.print(arr[i][j]+" ");
	             }
	            System.out.println();
	         }
	    }
	}
