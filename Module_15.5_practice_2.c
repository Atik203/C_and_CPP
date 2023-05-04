#include<stdio.h>

int my_len(char a[]) {
    int i;
    for (i = 0; a[i] != '\0'; i++)
     {
        
    }
    return i;
}

int main() {
    char s[100];
    scanf("%s", s);
    int p = my_len(s);
    printf("%d", p);
    return 0;
}
