//
//  Parallelogram.hpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//
#include <stdio.h>

#include "Quadrilateral.hpp"
#pragma once
class Parallelogram : public Quadrilateral {
public:
    Parallelogram(const std::string& name, double a, double b, double A, double B) : Quadrilateral(name, a, b, a, b, a, b, A, B){};
    void print_info () const;
    };
