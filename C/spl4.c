#include<stdio.h>

int main()
{
    int k, n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }

        k = 2 * (i -1);

        // Print increasing and decreasing sequence
        for (int j = 1; j <= 2 * i - 1; j++)
        {

            if (j <= i)
            {
                k += 2;
            }
            else
            {
                k -= 2;
            }
           printf("%-3d", k);
        }

        printf("\n");
    }

    return 0;
}
