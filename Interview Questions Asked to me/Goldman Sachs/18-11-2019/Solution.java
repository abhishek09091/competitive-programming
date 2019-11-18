/*******
 * 
 * 
 * Game of Book Cricket
 * 
 * Similar Question:
 * 
 * https://www.geeksforgeeks.org/count-ofdifferent-ways-express-n-sum-1-3-4/
 * 
 * Test Cases:
 * 
 * Input : 6 
 * Output : 4
 * 
 * 
 * *******/
public class Solution1 {
	
	static int noOfWaysToDrawTheGame(int totalScore) {

        if(totalScore % 2 == 1 || totalScore <= 0) {
            return 0;
        }
        int arr[] = new int[totalScore + 1];
        
        if(totalScore == 2) {
            return 1;
        }
        
        if(totalScore == 4) {
            return 2;
        }
        
        if(totalScore == 6) {
            return 4;
        }

        for(int i=0; i<8; i++){
            if(i == 2){
                arr[i] = 1;
            }else if(i==4){
                arr[i] = 2;
            }else if(i==6){
                arr[i] = 4;
            }else{
                arr[i] = 0;
            }
        }
        for(int  i=8; i<=totalScore; i+= 2) {
            
            arr[i] = arr[i-2] + arr[i-4] + arr[i-6];
        }
        
        return arr[totalScore];

   }

}
