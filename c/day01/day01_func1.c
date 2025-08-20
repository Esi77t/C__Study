// 함수 선언을 할거면 main 함수 보다 위에 쓸 것

#include <stdio.h>

void sayHello();        // 함수 선언 (예시)
int add(int a, int b);  // 함수 선언

int main() {
    sayHello();
    int sum = add(5, 3);
    printf("sum의 숫자는 %d 입니다.", sum);
    return 0;
}

void sayHello() {
    printf("Hello World\n");
}

int add(int a, int b) {
    return a + b;
}