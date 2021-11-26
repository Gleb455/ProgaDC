#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
    double a;

    printf("Enter alpha: ");
    scanf("%lf", &a);

    printf("z1 = %lf\n", (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * sin(2 * a) * sin(2 * a)));
    printf("z2 = %lf\n", 2 * sin(a));

    return 0;
}
