#include <stdio.h>

const unsigned razmer_stroky1 = 4;
const unsigned razmer_stolba1 = 5;

const unsigned razmer_stroky2 = 4;
const unsigned razmer_stolba2 = 5;

const unsigned razmer_stroky_sum = 4;
const unsigned razmer_stolba_sum = 5;

void Slaganie(int* _1_, int* _2_, int* sum_1_2);

int main(void)
{
    int _1_ [razmer_stolba1][razmer_stroky1] =     {{1, 0, 2, 1},
                                                    {2, 0, 0, 0},
                                                    {2, 1, 0, 2},
                                                    {1, 0, 0, 0},
                                                    {2, 0, 1, 1}};

    int _2_ [razmer_stolba2][razmer_stroky2] =     {{1, 0, 2, 1},
                                                    {2, 0, 0, 0},
                                                    {2, 1, 0, 2},
                                                    {1, 0, 0, 0},
                                                    {2, 0, 1, 1}};

    int sum_1_2 [razmer_stolba_sum][razmer_stroky_sum] = {{0, 0, 0, 0},
                                                          {0, 0, 0, 0},
                                                          {0, 0, 0, 0},
                                                          {0, 0, 0, 0},
                                                          {0, 0, 0, 0}};

Slaganie((int*)_1_, (int*)_2_, (int*)sum_1_2);

    return 0;
}

void Slaganie(int* _1_, int* _2_, int* sum_1_2)
{
    for(unsigned i = 0; i < razmer_stolba1; i++)
    {
        for(unsigned j = 0; j < razmer_stroky1; j++)
        {
            *((int*)sum_1_2 + i * razmer_stroky_sum + j) = *((int*)_1_ + i * razmer_stroky1 + j) + *((int*)_1_ + i * razmer_stroky2 + j);
            printf(" %d ", *((int*)sum_1_2 + i * razmer_stroky_sum + j));
        }
        printf("\n");
    }
}