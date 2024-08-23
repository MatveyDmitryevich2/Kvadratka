#ifndef VIVODATOR_FILE_H
#define VIVODATOR_FILE_H

#include "reshator_file.h"

/**
 * @brief Вывод решения квадратного уравнения
 * 
 * @param koaf_a коэффициент a при x^2
 * @param koaf_b коэффициент b при x
 * @param koaf_c коэффициент c
 * @param kolichestvo_resheniy показывает количество решений квадратного уравнения
 * @param reshenie_x1 одно из возможных решений квадратного уравнения
 * @param reshenie_x2 одно из возможных решений квадратного уравнения
 * 
 * Функция Vivodator() принимает переменные характеризующие квадратное уравнине. 
 * Она ввыводит само квадратное уравнение в привычном его виде
 * и его решения(при наличии). 
 */ 

void Vivodator(double koaf_a, 
               double koaf_b, 
               double koaf_c, 
               enum NRoots kolichestvo_resheniy, 
               double reshenie_x1, 
               double reshenie_x2);

#endif // VIVODATOR_FILE_H