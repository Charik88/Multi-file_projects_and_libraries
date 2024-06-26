//
//  main.cpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//

#include <iostream>
#include <vector>
#include "Figure.hpp"
#include "Triangle.hpp"
#include "RightTriangle.hpp"
#include "IsoscelesTriangle.hpp"
#include "EquilateralTriangle.hpp"
#include "Quadrilateral.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Parallelogram.hpp"
#include "Rhombus.hpp"
#pragma once

int main(int argc, const char * argv[]) {
    Triangle triangle("Треугольник", 3, 4, 5, 45, 45, 90);
    RightTriangle rightTriangle ("Прямоугольный треугольник", 3, 4, 5);
    IsoscelesTriangle isoscelesTriangle("Равнобедренный треугольник", 5, 5);
    EquilateralTriangle equilateralTriangle ("Равносторонний треугольник", 5);
    Quadrilateral  quadrilateral ("Четырехугольник", 2, 4, 3, 5, 90, 90, 90, 90);
    Rectangle rectangle ("Прямоугольник", 4, 6);
    Square square ("Квадрат", 4);
    Parallelogram parallelogram ("Параллелограмм", 3, 5, 60, 120);
    Rhombus rhombus ("Ромб", 4, 60, 120);
    std::vector<Figure*> figures = {&triangle, &rightTriangle, &isoscelesTriangle, &equilateralTriangle, &quadrilateral, &rectangle, &square, &parallelogram, &rhombus};

    for (const auto& figure : figures) {
        figure->print_info();
    }

    return 0;
}
