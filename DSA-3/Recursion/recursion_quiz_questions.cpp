#include <stdio.h>

int fun_1(int x, int y) 
{
  if (x == 0)
    return y;
  return fun_1(x - 1,  x + y);
} 

int fun(int n)
{
    if (n == 4)
       return n;
    else return 2*fun(n+1);
}

void fun_2(int n)
{
  if (n == 0)
    return;

  printf("%d", n%2);
  fun_2(n/2);
} 


int fun_3(int x, int y)
{
    if (y == 0)   return 0;
    return (x + fun_3(x, y-1));
}


int fun_4(int x, int y)
{
    if (y == 0)   return 0;
    return (x + fun_4(x, y-1));
}

int fun2(int a, int b)
{
    if (b == 0) return 1;
    return fun_4(a, fun2(a, b-1));
}

void print(int n)
{
    if (n > 4000)
        return;
    printf("%d ", n);
    print(2*n);
    printf("%d ", n);
}


int fun3(unsigned int n)
{
    if (n == 0 || n == 1)
        return n;

    if (n%3 != 0)
        return 0;

    return fun3(n/3);
}


int f(int n)
{
    if(n <= 1)
        return 1;
    if(n%2 == 0)
        return f(n/2);
    return f(n/2) + f(n/2+1);
}

 unsigned int foo(unsigned int n, unsigned int r) {
  if (n  > 0) return (n%r +  foo (n/r, r ));
  else return 0;
}

unsigned int foo1(unsigned int n, unsigned int r) {
  if (n  > 0) return (n%r +  foo (n/r, r ));
  else return 0;
}

int main()
{
   //printf("%d ", fun2(2,10));
   //fun_2(25);
   //print(1000);
    //getchar();
    //printf("%d ", fun3(12));
    //printf("%d ", f(11));
    printf("%d ",foo1(513, 2));
   return 0;
}