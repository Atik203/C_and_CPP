#include <stdio.h>

int main(void)
{
    int n;
    double x;

    printf("Enter the x value for calculate ( ln(1+x) ) : ");
    if (scanf("%lf", &x) != 1)
        return 1;

    printf("Enter the n value for calculate ( ln(1+x) ) : ");
    if (scanf("%d", &n) != 1)
        return 1;

    double power = -1.0;
    double total_x = 0.0;

    for (int k = 1; k <= n; k++)
    {
        power *= -x;
        total_x += power / k;
    }
    printf("Result of ln(1+x)= %f\n", total_x);
    return 0;
}