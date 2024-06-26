//
//  mathematical_functions_(2).cpp
//  multi-file_projects_and_librariesHW_2
//
//  Created by Anastasiya Charykova on 25.06.2024.
//

#include "mathematical_functions_(2).hpp"

Counter::Counter(int initialValue) : value(initialValue) {}

void Counter::increment() {
    ++value;
}

void Counter::decrement() {
    --value;
}

int Counter::getValue() const {
    return value;
}
