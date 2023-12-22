#include "engine.h"
#include <vector>
#include <string>

int main() {
    engine();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    engine_print_vector(vec);
}
