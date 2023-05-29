#include<stdio.h>
void my_abs(int a)
{
  if(a<0)
  {
    printf("%d",a*-1);
  }
  else
  {
    printf("%d",a);
  }
}
int main()
{
  int x;
  scanf("%d",&x);
  my_abs(x);

    return 0;
}