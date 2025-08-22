#include <stdio.h>

int main() {
    int i = 100;  // 정수형
    char ch1 = 'a';  // 문자형
    float f = 3.14f;    // 실수형(단정도 : 7자리까지)
    double d = 3.141592;    // 실수형(배정도 : 15자리까지)

    char ch2[7] = "abcedf";     // 'a', 'b', 'c', 'd', 'e', 'f', '\0,
                                // '\0'은 문자열 종료 문자

    printf("정수형 %d\n", i);
    printf("문자형 %c\n", ch1);     // 문자열 하나를 출력하고 싶다면 %c
    printf("문자형 %s\n", ch2);     // 문자열 전체를 출력하려면 %s
    printf("실수형 %f\n", f);
    printf("실수형 %lf\n", d);

    return 0;
}