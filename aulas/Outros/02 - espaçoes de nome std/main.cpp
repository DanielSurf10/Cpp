#include <iostream>
#include "print_hello.cpp"

void hello() {
    std::cout << "Hello" << std::endl;
}

int main() {
    print::hello();
    hello();

    return 0;
}
