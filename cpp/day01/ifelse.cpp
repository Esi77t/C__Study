#include <iostream>

int main() {
    int score = 90;

    if(score >= 90) {
        std::cout << "A" << std::endl;
    } else if(score >= 80) {
        std::cout << "B" << std::endl;
    } else {
        std::cout << "C 이하" << std::endl;
    }

    return 0;
}