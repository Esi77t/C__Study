#include <iostream>

int main() {
    int a = 10;
    int b = 7;

    // 산술연산자
    // 덧셈
    std::cout<< a + b << std::endl;
    // 뺄셈
    std::cout<< a - b << std::endl;
    // 곱하기
    std::cout<< a * b << std::endl;
    // 몫
    std::cout<< a / b << std::endl;
    // 나머지
    std::cout<< a % b << std::endl;

    // 비교 연산자
    // 비교 연산자 출력하려면 () 이거 써야 하는듯?
    // true면 1, false면 0을 반환함
    std::cout<< (a < b) << std::endl;   // 0
    std::cout<< (a > b) << std::endl;   // 1
    std::cout<< (a >= b) << std::endl;  // 1
    std::cout<< (a <= b) << std::endl;  // 0
    std::cout<< (a != b) << std::endl;  // 1
    std::cout<< (a == b) << std::endl;  // 0

    // 논리 연산자
    // 논리 연산자도 마찬가지인듯?
    // AND
    std::cout<< (a && b <= 20) << std::endl;  // 1
    // OR
    std::cout<< (a || b <= 20) << std::endl;  // 1
    // NOT
    std::cout<< (!true) << std::endl;   // 0

    return 0;
}