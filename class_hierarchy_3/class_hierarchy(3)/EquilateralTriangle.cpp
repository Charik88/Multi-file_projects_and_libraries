//
//  EquilateralTriangle.cpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//

#include "EquilateralTriangle.hpp"
#include <iostream>
#include <vector>

void EquilateralTriangle:: print_info()const{
    std::cout << name << ": " << std::endl;
    std::cout << "Стороны: a = " << a << ", b = " << a << ", c = " << a << std::endl;
    std::cout << "Углы: А = 60, B = 60, C = 60" << std::endl;
}
