#include<stdio.h>
// no return + parameter
void sum(int x,int y)
{
    int sum=x+y;
    printf("%d\n",sum);
}

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  sum(a,b);
    return 0;
}