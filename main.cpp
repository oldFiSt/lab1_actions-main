#include "lib.h"
#include <iostream>

int main(int, char **) {
    std::cout << "Version: " << version() << std::endl; // Вывод версии
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
