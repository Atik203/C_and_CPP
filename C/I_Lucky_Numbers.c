#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int x,y;
 x=n/10;
 y=n%10;
 if(y%x==0 || x%y==0)
 {
    printf("YES");
 }
 else
 {
    printf("NO");
 }
    return 0;
}