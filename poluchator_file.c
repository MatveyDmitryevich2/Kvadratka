#include "poluchator_file.h"

#include <stdio.h>
#include <math.h>
#include <assert.h>


void Poluchenie(double* koaf_a, double* koaf_b, double* koaf_c)
{
    assert(koaf_a != NULL);
    assert(koaf_b != NULL);
    assert(koaf_c != NULL);

    printf("Mogu reshit tvoyo kvadratnoe yravnenie. Vvedy koaficenty a,b,c cherez probel:");
    while(scanf("%lf %lf %lf",koaf_a,koaf_b,koaf_c)!=3)
    {
        printf("Ozhibka.Vvedy koaficenty a,b,c cherez probel:");
        int chtenie_stroki;
        while ((chtenie_stroki = getchar()) != '\n' && chtenie_stroki != EOF) { }
    }

}
