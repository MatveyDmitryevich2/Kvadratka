#include <stdio.h>
#include <math.h>
#include <assert.h>

int Sravnenie(double a, double b)
{
    int resultat = 0;
    if (fabs(a - b) < 0.0001)
        resultat = 1;

    return resultat;
}