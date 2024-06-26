//
//  IsoscelesTriangle.hpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//



#include <stdio.h>
#pragma once
#include "Triangle.hpp"

class IsoscelesTriangle : public Triangle{
public:
    IsoscelesTriangle(const std::string& name, double a, double c): Triangle (name, a, a, c, 0, 0, 0){}
    void print_info () const override;
};
