#include <iostream>
#include <list>

using namespace std;

int main() {
    auto a = 9;             // Não precisou escrever int
    list <int> a;
    decltype(a) b;          // Pegou o tipo de a


    return 0;
}
