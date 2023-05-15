#include<stdio.h>
int main()
{
    int n,k,s;
    scanf("%d",&n);
   s=n-1;
   k=1;
   
      for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=s;j++)
    {
        printf(" ");
    }
    for(int j=1;j<=k;j++)
    { 
        if(i%2==1)
      {
        printf("^");
      }
      if(i%2==0)
      {
        printf("*");
      }
    }
    k+=2;
    s--;
    printf("\n");
   }
   
 

    return 0;
}