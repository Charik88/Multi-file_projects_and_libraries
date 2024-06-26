//
//  main.cpp
//  multi-file_projects_and_librariesHW_2
//
//  Created by Anastasiya Charykova on 25.06.2024.

#include <iostream>
#include <string>
#include "mathematical_functions_(2).hpp"

int main(int argc, char* argv[]) {
    int initialValue;
    std::string command;
    bool userSetInitialValue = false;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> command;

    if (command == "да" || command == "ДА") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
        userSetInitialValue = true;
    } else {
        initialValue = 1;
    }

    Counter counter(userSetInitialValue ? initialValue : 1);

    std::cout << "Введите команду (+, -, =, x): ";
    while (std::cin >> command) {
        if (command == "+") {
            counter.increment();
        } else if (command == "-") {
            counter.decrement();
        } else if (command == "=") {
            std::cout << counter.getValue() << std::endl;
        } else if (command == "x") {
            std::cout << "До свидания!" << std::endl;
            return 0;
        }
        std::cout << "Введите команду (+, -, =, x): ";
    }
    return 0;
}
