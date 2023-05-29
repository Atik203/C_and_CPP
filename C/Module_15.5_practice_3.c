#include<stdio.h>
int count_odd(int a[],int n)
{
  int count=0;
  int i;
  for(i=0;i<n;i++)
  {
    if(a[i]%2 != 0)
    {
        count++;
    }
  }
  return count;
}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int s=count_odd(a,n);
  printf("%d",s);
    return 0;
}