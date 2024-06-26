//
//  Figure.hpp
//  class_hierarchy(3)
//
//  Created by Anastasiya Charykova on 26.06.2024.
//



#include <stdio.h>


#include <iostream>

class Figure {
protected:
    std::string name;
public:
    Figure(const std::string& name) : name(name){}
        virtual void print_info() const = 0;
    virtual ~Figure(){}
};

#pragma once
