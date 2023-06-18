#include <stdio.h>
int main()
{

int x, y, t;
x = 1;
y = 2;
t = (x*x + y*y)/x + y;
printf("The value of t = %i\n", t);
t *= ((x + y)/x) + (x/y);
printf("The value of t = %i\n", t);
t += (t*3) % 5;
printf("The value of t = %i\n", t);
return 0;

}
