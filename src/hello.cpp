// src/hello.cpp

#include "hello.h"

void sayHello() {
    // Introduce deliberate syntax error here
    int x  // Missing semicolon
    std::cout << "Hello, world!" << std::endl;
}
