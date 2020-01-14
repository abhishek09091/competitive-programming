
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {



    // Complete the countSpecialElements function below.
	static int countSpecialElements(List<List<Integer>> matrix) {

        
        Set<Integer> set = new HashSet<Integer>();
        
        //for the row
        for(int i=0; i<matrix.size(); i++) {
            
            List<Integer> temp = matrix.get(i);
            
            int mine_min = temp.get(0);
            int mine_max = temp.get(0);
            for(int j=1; j<temp.size(); j++) {
                
                if(mine_min > temp.get(j)) {
                    mine_min = temp.get(j);
                }else if(mine_min == temp.get(j)){
                    return -1;
                }
                
                if(mine_max < temp.get(j)) {
                    mine_max = temp.get(j);
                }else if(mine_max == temp.get(j)){
                    return -1;
                }
                
            }
            set.add(mine_min);
            set.add(mine_max);
        }
        System.out.println(set);
        //for the col
        int columns = matrix.get(0).size();
        int rows = matrix.size();
        System.out.println("rows: " + rows);
        int k = 0;

        for(int i=0 ; i< columns; i++) {

            List<Integer> temp = matrix.get(0);
            int mine_min = temp.get(0);
            int mine_max = temp.get(0);
            System.out.println("i: " + i);
            for(int j=1; j<rows; j++) {
                List<Integer> temp_1 = matrix.get(j);
                System.out.println("i: " + i + " j: " + j);
                if(mine_min > temp_1.get(i)) {
                    mine_min = temp_1.get(i);
                }else if(mine_min == temp_1.get(i)) {
                    return -1;
                }
                
                if(mine_max < temp_1.get(i)) {
                    mine_max = temp_1.get(i);
                }else if(mine_max == temp_1.get(i)) {
                    return -1;
                }
            }
            
            set.add(mine_min);
            set.add(mine_max);
        }
        System.out.println(set);
        return set.size();

    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int matrixRows = Integer.parseInt(bufferedReader.readLine().trim());
        int matrixColumns = Integer.parseInt(bufferedReader.readLine().trim());

        List<List<Integer>> matrix = new ArrayList<>();

        for (int i = 0; i < matrixRows; i++) {
            String[] matrixRowTempItems = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

            List<Integer> matrixRowItems = new ArrayList<>();

            for (int j = 0; j < matrixColumns; j++) {
                int matrixItem = Integer.parseInt(matrixRowTempItems[j]);
                matrixRowItems.add(matrixItem);
            }

            matrix.add(matrixRowItems);
        }

        int res = countSpecialElements(matrix);

        bufferedWriter.write(String.valueOf(res));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
