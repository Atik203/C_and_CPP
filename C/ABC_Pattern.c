#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int k=n;
    char c = 'A';
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=k;j++)
        {
            printf("%c",c);
            c++;
        }

        k--;
        printf("\n");
        c = 'A';
    }

    return 0;
}
