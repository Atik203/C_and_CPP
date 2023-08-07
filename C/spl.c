#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int s=n-2;
    int k=1;
    int s2=1;
    for(int i=1;i<=n;i++)
    {
        if(i<=n/2)
        {
            for(int j=1;j<s2;j++)
            {
                printf(" ");
            }
            for(int j=1;j<=k;j++)
            {
                printf("*");
            }
            for(int j=1;j<=s;j++)
            {
                printf(" ");
            }
            for(int j=1;j<=k;j++)
            {
                printf("*");
            }
             s=s-2;
             s2++;
        }
        else
        {
            for(int j=1;j<=n/2;j++)
            {
                printf(" ");
            }
            for(int j=1;j<=k;j++)
            {
                    printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
