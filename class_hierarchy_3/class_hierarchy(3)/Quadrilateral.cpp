//
//  Quadrilateral.cpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//

#include "Quadrilateral.hpp"
#include <iostream>
#include <vector>

void Quadrilateral::print_info() const {
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: a = " << a << ", b = " << b << ", c = " << c << ", d = " <<  d << std::endl;
    std::cout << "Углы: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl;
}
