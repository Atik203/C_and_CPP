#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int count = 0;
    for (int i = a; i <= b; i++) 
    {
        if (i == 1 || i == 0) 
        {
            continue;
        }
        
        int flag = 1;
        for (int j = 2; j <i; j++) 
        {
            if (i % j == 0) 
            { 
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
