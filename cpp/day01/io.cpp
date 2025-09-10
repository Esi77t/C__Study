#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    // 안내하기 위해 출력문
    std::cout << "이름을 입력하세요 : ";

    // cin
    // 데이터를 키보드로부터 입력받기 위해서 씀
    // 대충 Console.ReadLine()이나 Scanner 클래스, scanf 같은 느낌인듯
    std::cin >> name;   // 키보드로부터 입력을 받음

    std::cout << "나이를 입력하세요 : ";
    std::cin >> age;    // ���̸� �Է¹���

    std::cout << "안녕하세요, " << name << "님! 지금 나이는" << age << "세 입니다!";
    return 0;

    // std::cerr
    // 표준 오류 스트림 객체
    // 오류 메시지 출력할 때 사용

    // std::clog
    // 표준 로그 스트림 객체
    // 로그 메시지를 출력할 때 사용
}