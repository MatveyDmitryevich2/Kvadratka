#include "reshator_file.h"

#include <stdio.h>
#include <math.h>
#include <assert.h>

#include "sravnator_file.h"

enum NRoots Reshator(double koaf_a, double koaf_b, double koaf_c, double *reshenie_x1, double *reshenie_x2)
{
    assert(reshenie_x1 != NULL);
    assert(reshenie_x2 != NULL);
    assert(isfinite(koaf_a));
    assert(isfinite(koaf_b));
    assert(isfinite(koaf_c));

    if (Sravnenie(koaf_a, 0) == 1)
    {
        return R_Lineynie(koaf_b, koaf_c, reshenie_x1, reshenie_x2);
    }
    else
    {
        return R_Kvadraine(koaf_a, koaf_b, koaf_c, reshenie_x1, reshenie_x2);
    }
}

enum NRoots R_Lineynie(double koaf_b, double koaf_c, double *reshenie_x1, double *reshenie_x2)
{
    assert(reshenie_x1 != NULL);
    assert(reshenie_x2 != NULL);
    assert(isfinite(koaf_b));
    assert(isfinite(koaf_c));

    if (Sravnenie(koaf_b, 0) == 1)
    {
        if (Sravnenie(koaf_c, 0) == 1)
        {
            return BESCONECHNO_resheny;
        }
        else
        {
            return NET_resheniy;
        }
    }
    else
    {
        *reshenie_x1 = -koaf_c / koaf_b;
        *reshenie_x2 = -koaf_c / koaf_b;
        return ODNO_reshenie;
    }
}

enum NRoots R_Kvadraine(double koaf_a, double koaf_b, double koaf_c, double *reshenie_x1, double *reshenie_x2)
{
    assert(reshenie_x1 != NULL);
    assert(reshenie_x2 != NULL);
    assert(isfinite(koaf_b));
    assert(isfinite(koaf_c));
    assert(isfinite(koaf_a));

    double diskriminant = koaf_b * koaf_b - 4 * koaf_a * koaf_c;
    if (Sravnenie(diskriminant, 0) == 1)
    {
        *reshenie_x1 = (-koaf_b)/(2*koaf_a);
        *reshenie_x2 = (-koaf_b)/(2*koaf_a);
        return ODNO_reshenie;
    }
    else if (diskriminant > 0)
    {
        diskriminant = sqrt(diskriminant);
        *reshenie_x1 = (-koaf_b + diskriminant) / (2 * koaf_a);
        *reshenie_x2 = (-koaf_b - diskriminant) / (2 * koaf_a);
        return DVA_reshenia;
    }
    else
    {
        return NET_resheniy;
    }
}