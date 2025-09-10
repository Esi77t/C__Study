#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int res = add(10, 7);

    std::cout<< "합계 : " << res << std::endl;
}