// 함수
// 코드 재사용 단위
// 일정 작업을 수행하는 독립된 블록
// 입력 값(매개변수)을 받고, 출력 값(반환 값)을 줄 수 있음
// 자바로 치면 메서드와 거의 같음

// 함수 장점
// 코드 재사용 가능
// 가독성 향상
// 유지보수 용이

#include <stdio.h>

// 함수 선언(선언만 하는 경우)
int add(int a, int b);

// 함수 정의
int add(int a, int b) {
    return a + b;
}

void printHello() {
    printf("Hello, C!\n");
}

int main() {
    int result = add(3, 5);
    printf("결과 : %d\n", result);

    printHello();   // 호출

    return 0;
}