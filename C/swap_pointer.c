#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], brr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &brr[i]);
    }

    int *p = &arr;
    int *q = &brr;
    for (int i = 0; i < n; i++)
    {
        int temp = *p;
        *(p + i) = *(q + i);
        *(q + i) = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", *(p + i));
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", *(q + i));
    }
    return 0;
}