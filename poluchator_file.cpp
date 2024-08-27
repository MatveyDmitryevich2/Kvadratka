#include "poluchator_file.h"

#include <stdio.h>
#include <math.h>
#include <assert.h>


void Poluchenie(double* koaf_a, double* koaf_b, double* koaf_c)
{
    assert(koaf_a != NULL);
    assert(koaf_b != NULL);
    assert(koaf_c != NULL);

    printf("Могу решить твое квадратное уравнение. Введи коэфициенты a, b, c через пробел:");
    while(scanf("%lf %lf %lf",koaf_a,koaf_b,koaf_c) != 3)
    {
        printf("Ошибка. Введите коафиценты а, b, с через пробел:\n");
        int chtenie_stroki = 0;
        while ((chtenie_stroki = getchar()) != '\n' && chtenie_stroki != EOF) { }
    }

}
