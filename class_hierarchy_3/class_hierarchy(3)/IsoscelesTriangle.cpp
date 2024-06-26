//
//  IsoscelesTriangle.cpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//

#include "IsoscelesTriangle.hpp"
#include <iostream>
#include <vector>

void IsoscelesTriangle::print_info()const {
    std::cout << name << ": " << std::endl;
    std::cout << "Стороны: a = " << a << ", b = " << b << ", c = " << c << std::endl;
    std::cout << "Углы: А = " << A << ", B = " << B << ", C = " << C << std::endl;
}
