//
//  Square.hpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//



#include <stdio.h>
#include "Rectangle.hpp"
#pragma once

class Square : public Rectangle {
public:
    Square(const std::string& name, double a) : Rectangle(name, a, a){};
    void print_info () const;
    };

