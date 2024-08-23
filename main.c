#include <stdio.h>
#include <math.h>
#include <assert.h>

#include "reshator_file.h"
#include "vivodator_file.h"
#include "poluchator_file.h"
#include "proverator_file.h"

int main(int argc, char *argv[])
{    
    if(argc==2)
        printf("Privet! Mena zovut Matvey, Ya avtor itoy programmi. Ona reshaet kvadratnie yravnenia.");

    else
    {
        // Proverator ();
        double koaf_a = 0;
        double koaf_b = 0;
        double koaf_c = 0;
        double reshenie_x1 = 0;
        double reshenie_x2 = 0;
        enum NRoots kolichestvo_resheniy = 0;

        Poluchenie(&koaf_a, &koaf_b, &koaf_c);
        kolichestvo_resheniy = Reshator(koaf_a, koaf_b, koaf_c, &reshenie_x1, &reshenie_x2);
        Vivodator(koaf_a, koaf_b, koaf_c, kolichestvo_resheniy, reshenie_x1, reshenie_x2);
    }
    return 0;
}