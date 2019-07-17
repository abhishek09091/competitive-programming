/******

https://www.geeksforgeeks.org/interesting-method-generate-binary-numbers-1-n/

*****/


/*This is a function problem.You only need to complete the function given below*/
// Function to print all binary numbers upto n
void generate(ll n){
	// Your code here
	
	queue<string> q;
	q.push("1");
	while(n--){
	    
	    string s1 = q.front();
	    q.pop();
	    cout<<s1<<" ";
	    
	    string s2 = s1;
	    
	    q.push(s1.append("0"));
	    
	    q.push(s2.append("1"));
	}
	
	return;
}
