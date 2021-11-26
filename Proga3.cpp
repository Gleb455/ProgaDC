#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int t1, t2;

    printf("Введите число в 16 системе счисления: ");
    scanf("%x", &t1);

    printf("\n\nВведённое число в 8 системе: %o\n\n", t1);

    printf("Введённое число в 8 системе счисления: %o\n", t1);
    printf("Введённое число в 8 системе счисления со сдвигом влево на 1: %o\n\n", t1 << 1);

    printf("Введённое число в 8 системе счисления: %o\n", t1);
    printf("Введённое число в 8 системе счисления после битового отрицания: %o\n\n", ~t1);

    printf("Введите число в 8 системе счисления: ");
    scanf("%o", &t2);
    printf("Побитовое И в 8 системе счисления: %o\n", t1 & t2);

    return 0;
}



