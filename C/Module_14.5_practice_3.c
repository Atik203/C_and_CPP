#include<stdio.h>

int char_to_ascii(char a) {
    return (int)a;
}

int main() {
    char c;
    scanf("%c", &c);
    printf("%d\n", char_to_ascii(c));
    return 0;
}
