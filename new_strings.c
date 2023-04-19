#include<stdio.h>
int main()
{   
    char s[15]="Atikur Rahaman";
    printf("%s\n",s);
    int sz=sizeof(s)/sizeof(char);
    printf("%d",sz);
    return 0;
}