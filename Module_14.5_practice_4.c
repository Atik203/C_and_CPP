#include<stdio.h>
char small_to_capital(char a)
{

    return a-32;
}
int main()
{
    char c;
    scanf("%c",&c);
    printf("%c",small_to_capital(c)); 

    return 0;
}