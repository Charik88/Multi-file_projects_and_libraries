
#include "Triangle.hpp"
#include <iostream>
#include <vector>



void Triangle::print_info() const {
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: a = " << a << ", b = " << b << ", c = " << c << std::endl;
    std::cout << "Углы: A = " << A << ", B = " << B << ", C = " << C << std::endl;
}

//#pragma once
