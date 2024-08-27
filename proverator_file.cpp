#include "proverator_file.h"

#include <stdio.h>
#include <math.h>
#include <assert.h>

#include "reshator_file.h"
#include "sravnator_file.h"

void Peremenator(double *a, double *b);

int Testator(struct TestDannih test_dannih)
{
    int test = 0;
    int rezultat = 0;
    double reshenie_x1 = 0;
    double reshenie_x2 = 0;
    int kolichestvo_resheniy = 0;

    kolichestvo_resheniy =  Reshator(test_dannih.koaf_a, 
                                     test_dannih.koaf_b, 
                                     test_dannih.koaf_c, 
                                     &reshenie_x1, 
                                     &reshenie_x2);
    if (kolichestvo_resheniy != test_dannih.kolichestvo_resheniy_proverenie 
       || Sravnenie(reshenie_x1, test_dannih.proverenie_x1)==0 
       || Sravnenie(reshenie_x2, test_dannih.proverenie_x2)==0)
    {
        Peremenator(&test_dannih.proverenie_x1, &test_dannih.proverenie_x2);
        
        if (kolichestvo_resheniy != test_dannih.kolichestvo_resheniy_proverenie 
       || Sravnenie(reshenie_x1, test_dannih.proverenie_x1)==0 
       || Sravnenie(reshenie_x2, test_dannih.proverenie_x2)==0)
       {
            printf("\nОшибка в тесте %d: koaf_a = %lg, koaf_b = %lg, koaf_c = %lg, "
               "proverenie_x1 = %lg, proverenie_x2 = %lg, "
               "reshenie_x1 = %lg, reshenie_x2 = %lg, kolichestvo_resheniy = %d",
               test, 
               test_dannih.koaf_a, 
               test_dannih.koaf_b, 
               test_dannih.koaf_c, 
               test_dannih.proverenie_x1, 
               test_dannih.proverenie_x2, 
               reshenie_x1, 
               reshenie_x2, 
               kolichestvo_resheniy);
       }
    }
    else
        rezultat = 1;
    return rezultat;
}

void Proverator(void)
{

struct TestDannih massiv_testov[] = {
    {3,  6,  -24, -4,   2, DVA_reshenia},
    {1, -4,   4,   2,   2, ODNO_reshenie},
    {1, -2,  -3,   3,  -1, DVA_reshenia},
    {1, -5,   6,   3,   2, DVA_reshenia},
    {2, -8,   6,   3,   1, DVA_reshenia},
    {1,  6,   9,  -3,  -3, ODNO_reshenie},
    {1,  0,  -9,   3,  -3, DVA_reshenia},
    {1,  2,   1,  -1,  -1, ODNO_reshenie},
    {3, -12,  12,  2,   2, ODNO_reshenie},
    {1,  0,  -16,  4,  -4, DVA_reshenia},
};

    const int kolichestvo_testov = sizeof(massiv_testov) / sizeof(massiv_testov[0]);
    for (int i = 0; i < kolichestvo_testov; i++)
        Testator(massiv_testov[i]);
}

void Peremenator(double *a, double *b)
{
    double c = 0;

    c = *a;
        *a = *b;
             *b = c;
}
 