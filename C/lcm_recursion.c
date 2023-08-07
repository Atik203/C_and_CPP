#include <stdio.h>

int lcm(int a, int b, int multi)
{

    if ((multi % a == 0) && (multi % b == 0))
    {
        return multi;
    }
    else
        return lcm(a, b, multi + 1);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result;
    if (a > b)
    {
        result = lcm(b, a, a);
    }
    else
    {
        result = lcm(a, b, b);
    }

    printf("%d", result);
    return 0;
}