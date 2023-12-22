#include <iostream>
#include "engine.h"



void engine() {
    std::cout << "This is a finish engine/2.0 \n";
}

void engine_print_vector(const std::vector<std::string> &strings) {
    for(std::vector<std::string>::const_iterator it = strings.begin(); it != strings.end(); ++it) {
        std::cout << "engine/2.0 " << *it << std::endl;
    }
}
