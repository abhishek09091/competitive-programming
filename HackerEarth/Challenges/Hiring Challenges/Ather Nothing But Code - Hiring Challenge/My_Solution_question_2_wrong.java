import java.util.ArrayList;
import java.util.Collections;
import java.util.PriorityQueue;
import java.util.Scanner;

/* IMPORTANT: Multiple classes and nested static classes are supported */

/*
 * uncomment this if you want to read input.
//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;

//import for Scanner and other utility classes
import java.util.*;
*/

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
class CustomeArrayList{
	
	
	public PriorityQueue<Integer> minHeap ;
	public PriorityQueue<Integer> maxHeap ;
	
	public CustomeArrayList() {
		this.minHeap = new PriorityQueue<Integer>();
		this.maxHeap = new PriorityQueue<Integer>(Collections.reverseOrder());
		
	}
	
	public PriorityQueue<Integer> getMinHeap(){
		
		return minHeap;
	}
	
	public PriorityQueue<Integer> getMaxHeap(){
		
		return maxHeap;
	}
}



class TestClass {
    public static void main(String args[] ) throws Exception {
      
    	Scanner sc = new Scanner(System.in);
    	
    	Integer n = sc.nextInt();
    	Integer a ;
    	ArrayList<Integer> list = new ArrayList<Integer>();
    	ArrayList<CustomeArrayList> customList = new ArrayList<CustomeArrayList>();
    	
    	for(int i=0; i<n; i++) {
    		//scanned the element
    		a = sc.nextInt();
    		//added the element in the list
    		list.add(a);
    		
    		//create the object and added the value in custom class
    		CustomeArrayList tempCusList = new CustomeArrayList();
    		tempCusList.maxHeap.add(a);
    		tempCusList.minHeap.add(a);
    		customList.add(tempCusList);
    	}
    	
    	Integer q = sc.nextInt();
    	while(q-- > 0) {
    		Integer condition = sc.nextInt();
    		
    		if(condition == 1) {
    			Integer x = sc.nextInt();
    			Integer y = sc.nextInt();
    			x--;
    			y--;
    			if(x == y) {
    				continue;
    			}else {
    				Integer elementAtX = list.get(x);
    				Integer elementAtY = list.get(y);
    			
    				CustomeArrayList tempCusListX = customList.get(x);
    				tempCusListX.maxHeap.add(elementAtY);
    				tempCusListX.minHeap.add(elementAtY);
    			
    				CustomeArrayList tempCusListY = customList.get(y);
    				tempCusListY.maxHeap.add(elementAtX);
    				tempCusListY.minHeap.add(elementAtX);
    			}
    		}else {
    			Integer index = sc.nextInt();
    			index--;
    			
    			CustomeArrayList tempCusList = customList.get(index);
    			
    			if(tempCusList.maxHeap.size() <= 1 || tempCusList.minHeap.size() <= 1) {
    				
    				// corner case
    				System.out.println("0");
    			}else {
    				
    				//Find out the absolute difference from the max heap
    				Integer firstMax = tempCusList.maxHeap.peek();
    				tempCusList.maxHeap.poll();
    				Integer secondMax = tempCusList.maxHeap.peek();
    				
    				Integer absDifferenceFirst = Math.abs(firstMax - secondMax);
    				tempCusList.maxHeap.add(firstMax);
    				
    				
    				//Find out the absolute difference from the min heap
    				Integer firstMin = tempCusList.minHeap.peek();
    				tempCusList.minHeap.poll();
    				Integer secondMin = tempCusList.minHeap.peek();
    				
    				Integer absDifferenceSecond = Math.abs(firstMin - secondMin);
    				tempCusList.minHeap.add(firstMin);
    				
    				
    				//Compare both the results and print the minimum one
    				
    				if(absDifferenceFirst < absDifferenceSecond) {
    					System.out.println(absDifferenceFirst);
    				}else {
    					System.out.println(absDifferenceSecond);
    				}
    			}
    		}
    	}
    	
    	
    	sc.close();

    }
}

