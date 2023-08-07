#include<stdio.h>
int main( )
{
    int a[10];

    // suppose last 3 digit of id a =  100
    // and last one digit of id i = 0 +2 = 2;
    a[0]=100;

    for(int i=1;i<10;i++)
    {
        a[i] = 100 + 2*i;
    }

    for(int i=9;i>=0;i--)
    {
        printf("%d ",a[i]);
    }


    return 0;
}
