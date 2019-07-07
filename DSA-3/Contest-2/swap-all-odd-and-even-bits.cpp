/*****

https://www.geeksforgeeks.org/swap-all-odd-and-even-bits/

******/


/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// function to swap odd and even bits
unsigned int swapBits(unsigned int n){
	
	// Your code here
	unsigned int even_bits = n & 0xAAAAAAAA;
	
	unsigned int odd_bits = n & 0x55555555;
	
	even_bits >>= 1;
	
	odd_bits <<= 1;
	
	return (even_bits | odd_bits);
	
}