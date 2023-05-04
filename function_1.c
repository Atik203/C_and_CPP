#include<stdio.h>
// return type + parameter
int sum(int x,int y)
{
   int sum=x+y;
    return sum;
}
int main()
{
  printf("%d\n",sum(10,20));
  printf("%d",sum(10,205));
    return 0;
}