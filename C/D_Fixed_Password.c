#include<stdio.h>
int main()
{
  int n,i;
  for(i=1;i<=n;i++)
  {
    scanf("%d",&n);
    if(n==1999)
    {
        printf("Correct\n");
        break;
    }
    else
    {
        printf("Wrong\n");
    }
  }
    return 0;
}