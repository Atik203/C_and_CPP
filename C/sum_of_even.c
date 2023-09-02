#include <stdio.h>
int sum(int a, int b)
{
    if (a > b)
    {
        return 0;
    }
    else
        return a + sum(a + 2, b);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", sum(a, b));

    return 0;
}