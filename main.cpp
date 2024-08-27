#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <string.h>

#include "reshator_file.h"
#include "vivodator_file.h"
#include "poluchator_file.h"
#include "proverator_file.h"

void Help_help(void);
void Baza_osnova(void);

int main(int argc, char *argv[])
{    
    const char HELP[] = "--help";
    const char CHEСK[] = "--cheсk";

    if (argc > 1 && strcmp(HELP, argv[1])==0)
        Help_help();

    else if (argc > 1 && strcmp(CHEСK, argv[1])==0)
        Proverator();

    else
        Baza_osnova();
return 0;
}

void Help_help(void)
{
    printf("Привет! Меня зовут Матвей, Я написал этот Решатор квадратных уравнений, Он может решить "
           "любую твою задачу \n");
}

void Baza_osnova(void)
{
        double koaf_a = 0;
        double koaf_b = 0;
        double koaf_c = 0;
        double reshenie_x1 = 0;
        double reshenie_x2 = 0;

        Poluchenie(&koaf_a, &koaf_b, &koaf_c);
        enum NRoots  kolichestvo_resheniy = Reshator(koaf_a, koaf_b, koaf_c, &reshenie_x1, &reshenie_x2);
        Vivodator(koaf_a, koaf_b, koaf_c, kolichestvo_resheniy, reshenie_x1, reshenie_x2);
}