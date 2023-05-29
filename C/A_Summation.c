#include<stdio.h>

 int main(){
 int n;
  scanf("%d\n",&n);

  int ar[n];
  for(int i=1;i<=n;i++)
  {
    scanf("%d ",&ar[i]);
  }
  long long int sum=0;
  for(int i=1;i<=n;i++)
  {
    sum=sum+ar[i];
  }

  if(sum<0)
  {
    printf("%lld",sum*-1);
  }
  else
  {
    printf("%lld",sum);
  }

    return 0;
}