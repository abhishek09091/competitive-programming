public class Solution {
    public int solve(ArrayList<String> A) {
        
        Set<Double> set = new TreeSet<>();
        
        for(String str : A){
            set.add(Double.parseDouble(str));
        }
        
        double rangeDouble = 0.67;
        
        //Getting the three ranges
        List<Double> lowerRangeList = new ArrayList<>();
        for(Double d: set){
            if(d < rangeDouble){
                lowerRangeList.add(d);
            }
        }
        
        List<Double> middleRangeList = new ArrayList<>();
        for(Double d: set){
            if(d >= rangeDouble && d <= 1){
                middleRangeList.add(d);
            }
        }
        
        List<Double> upperRangeList = new ArrayList<>();
        for(Double d: set){
            if(d > 1 && d < 2){
                upperRangeList.add(d);
            }
        }
        
        double sum;
        int lowerRangeListSize = lowerRangeList.size();
        int middleRangeListSize = middleRangeList.size();
        int upperRangeListSize = upperRangeList.size();
        
        
        //Case 1
        if(lowerRangeListSize >= 3){
            sum = lowerRangeList.get(lowerRangeListSize - 1) + lowerRangeList.get(lowerRangeListSize - 2)+ lowerRangeList.get(lowerRangeListSize- 3);
            
            if(sum > 1 && sum < 2){
                return 1;
            }
        }
        
        
        //Case 2
        if(upperRangeListSize > 0 && lowerRangeListSize >= 2){
            sum = lowerRangeList.get(0) + lowerRangeList.get(1) + upperRangeList.get(0);
        
            if(sum > 1 && sum < 2){
                return 1;
            }
        }
        
        //Case 3
        if(lowerRangeListSize > 0 && middleRangeListSize > 0 && upperRangeListSize > 0){
            
            sum = lowerRangeList.get(0) + middleRangeList.get(0) + upperRangeList.get(0);
            
            if(sum > 1 && sum < 2){
                return 1;
            }
        }
        
        //Case 4
        if(lowerRangeListSize > 0 && middleRangeListSize > 1){
            
            sum = lowerRangeList.get(0) + middleRangeList.get(0) + middleRangeList.get(1);
            
            if(sum > 1 && sum < 2){
                return 1;
            }
        }
        
        //Case 5
        if(lowerRangeListSize > 1 && middleRangeListSize > 0){
            sum = lowerRangeList.get(lowerRangeListSize - 1) + lowerRangeList.get(lowerRangeListSize - 2) + middleRangeList.get(middleRangeListSize - 1);
            
            if(sum > 1 && sum < 2){
                return 1;
            }
        }
        
        //Case 6
        List<Double> first = new ArrayList<>();
        List<Double> second = new ArrayList<>();
        
        for(Double d: lowerRangeList){
            
            if(d < 0.5){
                first.add(d);
            }else{
                second.add(d);
            }
        }
        
        if(!first.isEmpty() && !second.isEmpty() && !middleRangeList.isEmpty()){
            
            sum = first.get(0) + second.get(0) + middleRangeList.get(0);
            
            if(sum > 1 && sum < 2){
                return 1;
            }
        }
        
        if(second.size() > 1 && !middleRangeList.isEmpty()){
            
            sum = second.get(0) + second.get(1) + middleRangeList.get(0);
            
            if(sum > 1 && sum < 2){
                return 1;
            }
        }
        
        
        if(!first.isEmpty() && !second.isEmpty() && !middleRangeList.isEmpty()){
            
            sum = first.get(first.size() - 1) + second.get(second.size() - 1) + middleRangeList.get(middleRangeList.size() - 1);
            
            if(sum > 1 && sum < 2){
                return 1;
            }
        }
        
        return 0;
        
    }
}
