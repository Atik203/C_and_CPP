#include<stdio.h>
#include<string.h>
int main()
{
    char s[10001];
    fgets(s,10001,stdin);
int capital=0,small=0,space;
for(int i=0;i<strlen(s);i++)
{
    if(s[i]>='A' && s[i]<='Z')
    {
        capital++;
    }
    if(s[i]>='a' && s[i]<='z')
  {
    small++;
  }

}
space=strlen(s)-(capital+small);

printf("Capital - %d\n",capital);
printf("Small - %d\n",small);
printf("Spaces - %d\n",space);

    return 0;
}