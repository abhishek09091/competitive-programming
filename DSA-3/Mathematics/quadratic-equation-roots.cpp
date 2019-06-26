/**

There are following important cases.


If b*b < 4*a*c, then roots are complex
(not real).
For example roots of x2 + x + 1, roots are
-0.5 + i1.73205 and -0.5 - i1.73205

If b*b == 4*a*c, then roots are real 
and both roots are same.
For example, roots of x2 - 2x + 1 are 1 and 1

If b*b > 4*a*c, then roots are real 
and different.
For example, roots of x2 - 7x - 12 are 3 and 4



**/


void quadraticRoots(int a,int b, int c)
{
   
   //Your code here
   
   if(a == 0){
       cout<<"Invalid";
       return;
   }
   
   double d = b * b - 4 * a * c;
   double res = sqrt(abs(d));
   
   if(d > 0){
       cout<<floor((double)(-b + res)/(2*a))<<" "<<floor((double)(-b - res)/(2*a));
   }else if(d == 0){
       cout<<-(double)b / (2*a)<<" "<<-(double)b / (2*a);
   }else if(d < 0){
       cout<<"Imaginary";
   }
   
   return ;
   
   // Your don't need to printline
   // It will automatically be 
   // handled by driver code
}
