#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
    char s[15];
    int n;

    printf("Enter the string: ");
    scanf("%s", s);

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Your string: %s\n", s);
    printf("Your integer: %d\n", n);

    return 0;
}
