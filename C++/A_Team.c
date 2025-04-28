#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int arr[n][3];
    int mrr[n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        mrr[i] = sum;
        sum = 0;
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (mrr[i] >= 2)
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}