//
//  Rhombus.hpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//



#include <stdio.h>
#include "Parallelogram.hpp"
#pragma once
class Rhombus : public Parallelogram {
public:
    Rhombus(const std::string& name, double a,double A, double B) : Parallelogram(name, a, a, A, B){};
    void print_info () const;
    };

