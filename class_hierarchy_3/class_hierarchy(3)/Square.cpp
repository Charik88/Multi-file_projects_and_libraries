//
//  Square.cpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//

#include "Square.hpp"
#include <iostream>
#include <vector>

void Square::print_info() const {
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: a = " << a << ", b = " << b << ", c = " << c << ", d = " <<  d << std::endl;
    std::cout << "Углы: A = 90, B = 90, C = 90, D = 90" << std::endl;
}
