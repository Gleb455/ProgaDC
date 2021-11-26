#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int a[7] = {123, 123, 123, 123, 456, 321, 1};

    printf("Данный массив: ");
    for (int i = 0; i < 7; i++)
        printf("%d ", a[i]);
    printf("\n");


    int m1[2][2] = { 1,2,3,4 }; 
    int m2[2][2] = { 1,5,4,3 };

    int t;
    for (int i = 0; i < 2; i++)
    {
        printf("\n");

        for (int j = 0; j < 2; j++)
        {
            t = 0;
            for (int k = 0; k < 2; k++)
                t += m1[i][k] * m2[k][j];
            printf("%2d ", t);
        }
    }

    printf("\n");
    return 0;
}