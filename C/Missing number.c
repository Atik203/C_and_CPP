#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
       long long int sum,a,b,c,d;
  scanf("%lld %lld %lld %lld",&sum,&a,&b,&c);
  d=sum-(a+b+c);
  printf("%lld\n",d);
  
    }
 

    return 0;
}