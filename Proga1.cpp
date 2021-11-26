#include <stdio.h>
#include <string.h>

int main()
{
    char s[15];
    int n;

    printf_s("Enter the string: "); 
    scanf_s("%s", &s);              //Пропущен знак & перед переменной в scanf_s

    printf_s("Enter an integer: ");
    scanf_s("%d", &n);

    printf_s("Your string: %s\n", s);
    printf_s("Your integer: %d\n", n);

    return 0;
}
