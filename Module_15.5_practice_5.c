#include<stdio.h>
void swap_it(int *a,int *b)
{
  int tmp=*a;
  *a=*b;
  *b=tmp;

}
int main()
{
  int x,y;
  scanf("%d %d",&x,&y);
  swap_it(&x,&y);
  printf("%d %d",x,y);

    return 0;
}