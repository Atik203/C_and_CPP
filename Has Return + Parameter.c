#include<stdio.h>
int square(int x)
{
    int sq=x*x;
    return sq;
}
int main()
{
      int n=5;
      int a=square(n);
      printf("%d\n",a);
    return 0;
}
