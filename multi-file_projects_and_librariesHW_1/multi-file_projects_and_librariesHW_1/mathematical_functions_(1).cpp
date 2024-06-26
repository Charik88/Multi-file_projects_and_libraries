//
//  mathematical_functions_(1).cpp
//  multi-file_projects_and_librariesHW_1
//
//  Created by Anastasiya Charykova on 25.06.2024.
//
#include<iostream>
#include "mathematical_functions_(1).hpp"
 int main() {

   int a, b, operation;
   std::cout << "Введиет первое число: ";
   std::cin >> a;
   std::cout << "Введите второе число: ";
   std::cin >> b;
   std::cout << "Выберите операцию (1 - умножение, 2 - сложение, 3 - вычитание, "
                "4 - деление, 5 - возведение в степень): ";
   std::cin >> operation;

   switch (operation) {
   case 1:
     std::cout << a << " * " << b << " = " << multiply(a, b) << std::endl;
     break;
   case 2:
     std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
     break;
   case 3:
     std::cout << a << " - " << b << " = " << subtract(a, b) << std::endl;
     break;
   case 4:
     std::cout << a << " / " << b << " = " << divide(a, b) << std::endl;
     break;
   case 5:
     std::cout << a << " в степени " << b << " = " << power(a, b) << std::endl;
     break;
   }
   return 0;
 }
