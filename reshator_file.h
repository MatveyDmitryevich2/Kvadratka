#ifndef RESHATOR_FILE_H
#define RESHATOR_FILE_H


enum NRoots 
{
    BESCONECHNO_resheny = -1, ///<бесконечное количество решений данного квадратного уравнения
    NET_resheniy        =  0, ///<нет решений данного квадратного уравнения
    ODNO_reshenie       =  1, ///<единственное решение данного квадратного уравнения
    DVA_reshenia        =  2, ///<два решения данного квадратного уравнения
};


/**
 * @brief Решение квадратного уравнения
 * 
 * @param koaf_a коэффициент a при x^2
 * @param koaf_b коэффициент b при x
 * @param koaf_c коэффициент c
 * @param reshenie_x1 одно из возможных решений квадратного уравнения
 * @param reshenie_x2 одно из возможных решений квадратного уравнения
 * 
 * Функция Reshator() принимает коэффициенты квадраного уравнеиния и решает его. Возвращает ответы и коэффициенты.
 * 
 */ 
enum NRoots Reshator(double koaf_a, double koaf_b, double koaf_c, double *reshenie_x1, double *reshenie_x2);

/**
 * @brief Случай решения квадратного уравнения
 * 
 * @param koaf_b коэффициент b при x
 * @param koaf_c коэффициент c
 * @param reshenie_x1 одно из возможных решений квадратного уравнения
 * @param reshenie_x2 одно из возможных решений квадратного уравнения
 * 
 * Функция R_Lineynie() принимает коэффициенты b и c, и решает линейное уравнине. 
 * Она возвращает его решение, а также значение перменной kolichestvo_resheniy.
 */ 

enum NRoots R_Lineynie (double koaf_b, double koaf_c, double *reshenie_x1, double *reshenie_x2);

/**
 * @brief Случай решения квадратного уравнения
 * 
 * @param koaf_a коэффициент a при x^2
 * @param koaf_b коэффициент b при x
 * @param koaf_c коэффициент c
 * @param reshenie_x1 одно из возможных решений квадратного уравнения
 * @param reshenie_x2 одно из возможных решений квадратного уравнения
 * 
 * Функция R_Kvadraine() принимает коэффициенты a, b и c, и решает квадратное уравнине, рассматривая 
 * три возможных исхода. Она возвращает его решения, а также их количество с помощью return
 */ 

enum NRoots R_Kvadraine (double koaf_a, double koaf_b, double koaf_c, double *reshenie_x1, double *reshenie_x2);

 #endif // RESHATOR_FILE_H