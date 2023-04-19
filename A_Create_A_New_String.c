#include<stdio.h>
#include<string.h>

int main()
{  
char s[1000],t[1000];
 scanf("%s\n%s",&s,&t);

int st=strlen(s);
int ab=strlen(t);
printf("%d %d\n",st,ab);
printf("%s %s",s,t);

 
    return 0;
}