#ifndef PROVERATOR_FILE_H
#define PROVERATOR_FILE_H

struct TestDannih
{
    double koaf_a; ///<коэффициент a при x^2
    double koaf_b; ///<коэффициент b при x
    double koaf_c; ///<коэффициент c
    double proverenie_x1; ///<ожидаемое х1 
    double proverenie_x2; ///<ождаемое х2
    int kolichestvo_resheniy_proverenie; ///<ожидаемое количество решений
};

/**
 * @brief Запускает все тесты для квадратного уравнения

 * Функция Proverator() не принимает и не возвращает значения
 * Используеться для тестрирования функции Reshator()
 */ 

void Proverator(void);

/**
 * @brief Тестирует функцию Reshator()
 * 
 * @param struct TestDannih
 * 
 * @return возвращает результат тестирования: 1 или 0, соответсвенно правильные рузультаты или нет.
 * 
 * Функция Testator() принимает значения из структры struct TestDannih и сравнивает их со значениями, котрые
 * были посчиатнны программой. 
 */ 

int Testator(struct TestDannih test_dannih);

#endif // PROVERATOR_FILE_H