/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
bool myCompare(Interval v1,Interval v2){
	
	return v1.start < v2.start;
} 
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
	if(A.size <= 0 ){
		return vector<Interval> vec;
	}
	
	
	sort(A.begin(),A.end(),myCompare);
	
	stack<Interval> s;
	
	s.push(A[0]);
	
	for(int i=1; i<A.size(); i++){
		
		Interval temp = s.top();
		
		if(temp.end < A[i].start){
			s.push(A[i]);
		}else if(temp.end < A[i].end){
			temp.end = A[i].end;
			s.pop();
			s.push(A[i]);
		}
	}
	
	vector<Interval> res;
	
	while(!s.empty()){
		Interval t = s.top();
		res.push_back(t);
		s.pop();
	}
    
	return res;
}
