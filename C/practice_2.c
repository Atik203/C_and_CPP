#include<stdio.h>

int main(){

int a, b, sum, sub, multi;
float division;

scanf("%d  %d",&a, &b);

sum = a + b;
sub = a - b;
multi = a * b;
division = (float)a/b;



printf("%d + %d = %d\n", a, b, sum);
printf("%d - %d = %d \n", a, b, sub);
printf("%d * %d = %d\n", a, b, multi);
printf("%d / %d = %.2f\n", a, b, division);

return 0;
}
