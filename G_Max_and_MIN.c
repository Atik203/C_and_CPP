#include <stdio.h>
#include <limits.h>
void max_min(void)
{
int n;
scanf("%d", &n);
int a[n];
for (int i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
int max = INT_MIN, min = INT_MAX;
for (int i = 0; i < n; i++)
{
if (a[i] > max)
{
max = a[i];
}
if (a[i] < min)
{
min = a[i];
}
}
printf("%d %d\n", min, max);
}
int main()
{
max_min();
return 0;
}