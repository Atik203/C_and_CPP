#include<stdio.h>
int main ()
{
 float x,n;
 scanf("%f %f",&x,&n);
 float total= (100*n)/(100-x);
 printf("%.2f",total);

    return 0;
}