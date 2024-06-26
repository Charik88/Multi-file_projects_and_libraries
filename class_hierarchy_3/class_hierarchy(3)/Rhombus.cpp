//
//  Rhombus.cpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//

#include "Rhombus.hpp"
#include <iostream>
#include <vector>

void Rhombus::print_info() const {
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: a = " << a << ", b = " << a << ", c = " << a << ", d = " <<  a << std::endl;
    std::cout << "Углы: A = " << A << ", B = " << B << ", C = "<< A << ", D = " << B << std::endl;
}
