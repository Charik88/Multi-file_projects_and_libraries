//
//  Quadrilateral.hpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//



#include <stdio.h>
#include "Figure.hpp"
#pragma once

class Quadrilateral : public Figure {
protected:
    double a, b, c, d;
    double A, B, C, D;
public:
    Quadrilateral(const std::string& name,double a, double b, double c, double d, double A, double B, double C, double D):Figure(name), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D){}
    void print_info() const override;
       
   };
