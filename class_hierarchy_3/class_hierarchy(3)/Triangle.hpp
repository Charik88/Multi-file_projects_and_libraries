//
//  Triangle.hpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//



#include <stdio.h>


#include "Figure.hpp"

class Triangle : public Figure {
protected:
    double a, b, c;
    double A, B, C;
public:
    Triangle(const std::string& name, double a, double b, double c, double A, double B, double C) : Figure(name), a(a), b(b), c(c), A(A), B(B), C(C){}
    
 void print_info() const override;
    
};
#pragma once

