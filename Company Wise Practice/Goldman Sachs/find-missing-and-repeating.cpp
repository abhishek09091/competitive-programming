/********

https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/

*******/

#include <iostream>
using namespace std;
int main()
{
    int T;
    long long int sum_n, sum_n2, n, curr;
    
    cin>>T;
    for(int t = 0; t<T; t++)
    {
        sum_n =0;
        sum_n2 =0;
        cin>>n;
        for(int i =0; i<n; i++)
        {
            cin>>curr;
            sum_n += curr;
            sum_n2 += (curr)*(curr);
        }
        
        //A-B    
        long long int x = (n*(n+1))/2 - sum_n;
        long long int y = ((n*(n+1)*(2*n+1))/6 - sum_n2)/x;
        
        cout<<(y-x)/2<<" "<<(x+y)/2<<endl;
        
        
    }
}