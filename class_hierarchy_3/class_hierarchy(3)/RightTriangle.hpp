//
//  RightTriangle.hpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//



#include <stdio.h>
#pragma once
#include "Triangle.hpp"
class RightTriangle : public Triangle {
public:
    RightTriangle(const std::string& name, double a, double b, double c) : Triangle(name, a, b, c, 0, 0, 90){}
    void print_info() const override;
};

