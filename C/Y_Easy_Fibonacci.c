#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int fib0 = 0;
    int fib1 = 1;
    printf("%d ", fib0);
    printf("%d ", fib1);
if (N >= 2) 
{
    for (int i = 2; i < N; i++) 
    {
        int fib = fib0 + fib1;
        printf("%d ", fib);
        fib0 = fib1;
         fib1 = fib;
    }
}
    return 0;
}
