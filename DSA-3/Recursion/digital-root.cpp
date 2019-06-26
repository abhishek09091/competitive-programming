/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function

int digital_root_1(int n){
	
	if(n == 0){
		return 0;
	}
	return (n % 9 == 0) ? 9 : (n % 9);
}


/**

https://www.geeksforgeeks.org/digital-rootrepeated-digital-sum-given-integer/

The idea is based on the fact that for a non-zero number num, digital root is 9 if number is divisible by 9, 
else digital root is num % 9. (Please see http://www.sjsu.edu/faculty/watkins/Digitsum0.htm for details)

Find the digital root of 65785412
Steps:

Sum of digits = 6 + 5 + 7 + 8 + 5 + 4 + 1 + 2 = 38
Since 38 is not multiple of 9, digital root is 38 % 9 = 2.


**/

int digital_root_string(string str){
	
	if(str.compare("0") == 0){
		return 0;
	}
	
	int num = 0;
	
	for(int i=0; i<str.length(); i++){
		
		num = (num + (str[i] - '0') )%9;
	}
	
	return (num == 0) ? 9 : num % 9;
	
	
}

int digitalRoot(int n)
{
    //Your code here
    
    while(n > 9){
        int res = 0;
        while(n > 0){
            res += n %10;
            n /= 10;
        }
        
        n = res;
    }
    
    return n;
}