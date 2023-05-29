#include<stdio.h>
int main()
{
 long long int e,m,k;
 long long result=0;
 scanf("%lld %lld %lld",&e,&m,&k);

if(e==0 && k==0)
{
    printf("0\n");
}
else
{  
    long long min=e;
    if(m<min)
    {
        min=m;
    }
    if(k<min)
    {
        min=k;
    }
 
   e-=min;
   m-=min;
   k-=min;
   result+=min;
  
    if(e/2<k)
  {
     result+=e/2;
  }
else
{
    result+=k;
}
printf("%lld",result);

}

return 0;
}