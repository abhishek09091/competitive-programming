int gcd(int a, int b) 
{ 
    // Everything divides 0 
    if (a == 0 || b == 0) 
        return 0; 
  
    // base case 
    if (a == b) 
        return a; 
  
    // a is greater 
    if (a > b) 
        return gcd(a - b, b); 
    return gcd(a, b - a); 
}
int Solution::cpFact(int x, int y) {
    
    while (gcd(x, y) != 1) { 
        x = x / gcd(x, y); 
    } 
    return x;
}
