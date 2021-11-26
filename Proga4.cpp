#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int t;

    printf("Введите число: ");
    scanf("%d", &t);

    printf((t >-100 && t<100) ? "Число в промежутке\n\n" : "Число не в промежутке\n\n");

    printf("Введите число в 8 системе счисления для проверки бита: ");
    scanf("%o", &t);
    printf("Девятый бит введённого числа: %d\n", (t >> 8) % 2);

    return 0;
}
