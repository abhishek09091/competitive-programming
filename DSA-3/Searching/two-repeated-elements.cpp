/********

https://www.geeksforgeeks.org/find-the-two-repeating-elements-in-a-given-array/

********/


/*This is a function problem.You only need to complete the function given below*/
class Repeated{
    // Function to find the repeated element in the array
    // arr[]: input array
    // n: size of array
    static void twoRepeated(int arr[], int n){
        
        // Your code here
        Set<Integer> set = new HashSet<>();
        //StringBuffer sb = new StringBuffer();
        for (int val : arr) {
            if (!set.add(val)){
              System.out.print(val + " ");  
            } 
            //sb.append(val + " ");
        }
        //System.out.print(sb);
        //System.out.println();
    }
    
}