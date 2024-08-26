#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <string.h>

#include "reshator_file.h"
#include "vivodator_file.h"
#include "poluchator_file.h"
#include "proverator_file.h"

void HELPHELP(void);
void BAZAOSNOVA(void);

int main(int argc, char *argv[])
{    
    const char HELP[] = "--help";
    if(argc > 1 && strcmp(HELP, argv[1])==0)
        HELPHELP();
    else
        BAZAOSNOVA();
return 0;
}

void HELPHELP(void)
{
    //printf("Kak tebi zovut?");
    //char Ima[1000];
    //gets(Ima);
    printf("Privet! Mena zovut Matvey, Ia napisal itot Reshator kvadratnih uravneniy, Ona mozhet reshit"
    "lubuu tvou zadachu");
}

void BAZAOSNOVA(void)
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