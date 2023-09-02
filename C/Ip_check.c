#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isValidIPAddress(const char *str)
{
    int numParts = 0;
    int part1, part2, part3, part4;

    // Use sscanf to parse the string into four parts
    if (sscanf(str, "%d.%d.%d.%d", &part1, &part2, &part3, &part4) != 4)
    {
        return 0;
    }

    if (part1 >= 0 && part1 <= 255 &&
        part2 >= 0 && part2 <= 255 &&
        part3 >= 0 && part3 <= 255 &&
        part4 >= 0 && part4 <= 255)
    {
        return 1;
    }

    return 0;
}
void PrintIPAddress(const char *str)
{
    if (isValidIPAddress(str))
    {
        printf("%s is a valid IP address\n", str);
    }
    else
    {
        printf("%s is not a valid IP address\n", str);
    }
}

int main()
{
    char s[20];
    fgets(s, sizeof(s), stdin);

    // Remove the newline character from s
    if (s[strlen(s) - 1] == '\n')
    {
        s[strlen(s) - 1] = '\0';
    }
    PrintIPAddress(s);

    return 0;
}
