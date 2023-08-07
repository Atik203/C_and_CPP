#include <stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
} Date;
Date input(Date dt)
{
    scanf("%d %d %d", &dt.day, &dt.month, &dt.year);
    return dt;
}
void print(Date dt)
{
    printf("day-%d month-%d year-%d", dt.day, dt.month, dt.year);
}
int main()
{
    Date next_day;
    next_day = input(next_day);
    print(next_day);

    return 0;
}