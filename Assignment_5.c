#include <stdio.h>
#include <string.h>

int is_palindrome(char* string) 
{
    int len = strlen(string);
    int flag = 1;
    for(int i=0; i<len; i++) 
    {
        if(string[i] != string[len-i-1]) 
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() 
{
    char s[11];
    scanf("%s",s);
    if(is_palindrome(s) ==1) 
    {
        printf("Palindrome\n");
    }
    else
     {
        printf("Not Palindrome\n");
    }
    return 0;
}
