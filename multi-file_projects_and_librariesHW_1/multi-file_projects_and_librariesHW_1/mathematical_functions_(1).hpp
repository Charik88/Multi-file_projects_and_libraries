//
//  mathematical_functions_(1).hpp
//  multi-file_projects_and_librariesHW_1
//
//  Created by Anastasiya Charykova on 25.06.2024.
//

#ifndef mathematical_functions__1__hpp
#define mathematical_functions__1__hpp

#include <stdio.h>

#endif /* mathematical_functions__1__hpp */

 #include <cmath>
 #include <iostream>

 // функция умножения
 int multiply(int a, int b) { return a * b; }
 // функция сложения
 int add(int a, int b) { return a + b; }
 // функция вычитания
 int subtract(int a, int b) { return a - b; }
 // функция деления
 int divide(int a, int b) {
   if (b == 0) {
     std::cout << "Ошибка: деление на ноль!" << std::endl;
   }
   return a / b;
 }
 // функция возведения в степень
 int power(int a, int b) { return pow(a, b); }
