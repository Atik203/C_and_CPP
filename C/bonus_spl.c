#include <stdio.h>

int main()
{
    char category;
    int experience, familyMembers;
    float income;

    scanf(" %c", &category);
    scanf("%d", &experience);
    scanf("%d", &familyMembers);
    scanf("%f", &income);

    if ((experience >= 12 && familyMembers > 5) && income < 1000.50)
    {
        printf("eligible\n");
    }
    else if ((category == 'Y' || category == 'Z') && familyMembers > 8 && income < 1100.78)
    {
        printf("eligible\n");
    }
    else if (category == 'X' && familyMembers > 6)
    {
        printf("eligiblen");
    }
    else
        {
        printf("not eligible\n");
    }

    return 0;
}

