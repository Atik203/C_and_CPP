#include<stdio.h>
// return + no parameter
int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    return sum;
}
int main()
{
  int c=sum();
  printf("%d\n",c);
    return 0;
}