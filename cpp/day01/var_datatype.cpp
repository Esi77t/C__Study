#include <iostream>
#include <string>

int main() {
    // 정수형
    int age = 20;
    // 실수형
    double pie = 3.14159;
    // 문자
    char ch = 'A';
    // 논리형
    bool bl = true;
    // 문자형
    // <string> 헤더 필요
    std::string str = "Hello";

    std::cout << age << std::endl;
    std::cout << pie << std::endl;
    std::cout << ch << std::endl;
    std::cout << bl << std::endl;
    std::cout << str << std::endl;

    return 0;
}