#include<stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld ",&a,&b,&c);
    long long int mn=0;
    if(a<b && a<c)
   { 
    mn=a;
   }
    else if(b<a && b<c)
    {
        mn=b;
    }
    else
    {
         mn=c; 
         }
    a-=mn;
    b-=mn;
    c-=mn;
    long long int x=a/2;
    long long int ans;
    if(x<c)
    {
        ans=mn+x;
    }
    else
    {
        ans=mn+c;
    }
    printf("%lld",ans);

return 0;
}