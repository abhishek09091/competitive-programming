int multiplicationUnderModulo(long long a,long long b)
{
    int M=1000000007;
    //your code here
    return ((a % M) * (b % M))%M;
}