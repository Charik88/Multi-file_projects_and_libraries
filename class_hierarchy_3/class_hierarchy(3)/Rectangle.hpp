//
//  Rectangle.hpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//



#include <stdio.h>
#include "Quadrilateral.hpp"
#pragma once

class Rectangle : public Quadrilateral {
public:
    Rectangle(const std::string& name, double a, double b) : Quadrilateral(name, a, b, a, b, 90, 90, 90, 90){};
    void print_info () const;
    };
