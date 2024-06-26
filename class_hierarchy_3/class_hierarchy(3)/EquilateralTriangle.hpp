//
//  EquilateralTriangle.hpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//



#include <stdio.h>
#pragma once
#include "Triangle.hpp"

class EquilateralTriangle : public Triangle{
public:
    EquilateralTriangle(const std::string& name, double a) : Triangle (name, a, a, a, 60, 60, 60){}
    void print_info () const override;
};

