#include<stdio.h>
int main ()
{  char a[20]="Atikur Rahaman";
  fgets(a,15,stdin);
 a[16]='\0';
 printf("%s",a);
    return 0;
}