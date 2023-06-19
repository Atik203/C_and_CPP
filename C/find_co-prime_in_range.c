#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int count = 0;
    for(int num = a; num <= b; num++)
    {
        int isCoprime = 1;
        for(int i = 2; i <num; i++)
        {
            if(num % i == 0)
            {
                isCoprime = 0;
                break;
            }
        }
        if(isCoprime)
        {
            count++;
        }
    }
    
    printf("%d\n",count);
    
    return 0;
}
