#include<stdio.h>
char capital_to_small(char a)
{

    return a+32;
}
int main()
{
    char c;
    scanf("%c",&c);
    printf("%c",capital_to_small(c)); 

    return 0;
}