/********


https://www.geeksforgeeks.org/sort-elements-by-frequency-set-5-using-java-map/

********/
//Initial Template for Java
import java.util.*;
import java.io.*;
import java.lang.*;
import java.util.Map.Entry;
class Driverclass 
{
	public static void main(String[] args) throws NumberFormatException, IOException
	{
		BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(sc.readLine());
	    while(n != 0)
		{
			int size = Integer.parseInt(sc.readLine());
			int arr[] = new int[size];
			String[] temp = sc.readLine().trim().split("\\s+");
			
			for(int i = 0; i < size; i++)
			    arr[i] = Integer.parseInt(temp[i]);
			    
			    new Sorting().sortByFreq(arr, size);
			    System.out.println();
			n--;
		}
	}
}

/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
class Sorting{
    
    static void sortByFreq(int arr[], int n){
        // add your code here
        Map<Integer, Integer> map = new HashMap<>(); 
        List<Integer> outputArray = new ArrayList<>(); 
  
        // Assign elements and their count in the list and map 
        for (int current : arr) { 
            int count = map.getOrDefault(current, 0); 
            map.put(current, count + 1); 
            outputArray.add(current); 
        } 
  
        // Compare the map by value 
        SortComparator comp = new SortComparator(map); 
  
        // Sort the map using Collections CLass 
        Collections.sort(outputArray, comp); 
  
        // Final Output 
        for (Integer i : outputArray) { 
            System.out.print(i + " "); 
        }
    }
}

class SortComparator implements Comparator<Integer> { 
    private final Map<Integer, Integer> freqMap; 
  
    // Assign the specified map 
    SortComparator(Map<Integer, Integer> tFreqMap) 
    { 
        this.freqMap = tFreqMap; 
    } 
  
    // Compare the values 
    @Override
    public int compare(Integer k1, Integer k2) 
    { 
  
        // Compare value by frequency 
        int freqCompare = freqMap.get(k2).compareTo(freqMap.get(k1)); 
  
        // Compare value if frequency is equal 
        int valueCompare = k1.compareTo(k2); 
  
        // If frequency is equal, then just compare by value, otherwise - 
        // compare by the frequency. 
        if (freqCompare == 0) 
            return valueCompare; 
        else
            return freqCompare; 
    } 
} 