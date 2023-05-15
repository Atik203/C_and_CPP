#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
      int a,b;
 scanf("%d %d",&a,&b);
 if(a==b)
 {
    printf("Square\n");
 }
 else
 {
    printf("Rectangle\n");
 }
    }


    return 0;
}