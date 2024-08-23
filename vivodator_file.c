#include "vivodator_file.h"

#include <stdio.h>
#include <math.h>
#include <assert.h>

#include "reshator_file.h"

void Vivodator(double koaf_a, 
               double koaf_b, 
               double koaf_c, 
               enum NRoots kolichestvo_resheniy, 
               double reshenie_x1, 
               double reshenie_x2)
{
    switch (kolichestvo_resheniy)
    {
        case DVA_reshenia:
        {
            printf("(%lf)x*x+(%lf)x+(%lf)=0 \nx1=%lf\nx2=%lf",koaf_a, koaf_b, koaf_c, reshenie_x1, reshenie_x2);                     
            break;
        }
        case ODNO_reshenie:
        {
            printf("(%lf)x*x+(%lf)x+(%lf)=0 \nx=%lf", koaf_a, koaf_b, koaf_c, reshenie_x1);
            break;
        }
        case NET_resheniy:
        {
            printf("(%lf)x*x+(%lf)x+(%lf)=0 \nnet resheniy", koaf_a, koaf_b, koaf_c);
            break;
        }
        case BESCONECHNO_resheny:
        {
            printf("(%lf)x*x+(%lf)x+(%lf)=0 \nbesconechno resheniy", koaf_a, koaf_b, koaf_c);
            break;
        }
        default:
        {
            break;
        }
    }

}