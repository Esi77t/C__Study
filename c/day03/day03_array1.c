#include <stdio.h>

int main() {
    // 어제 했던 정수형 다시 써보기
    // 정수형 배열 선언 및 초기화
    int numbers1[5] = {10, 20, 30, 40, 50};

    // 반복문을 활용해 배열 원소 출력
    for (int i = 0; i < 5; i++) {
        printf("numbers1[%d] = %d\n", i, numbers1[i]);
    }


    // 문자열 배열
    char str[6] = "Hello";      // 다섯 글자 + '\0'

    printf("문자열: %s\n", str);
    printf("문자열 출력: ");
    for (int i = 0; i < 6; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    // 배열 합계 계산
    int numbers2[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += numbers2[i];
    }

    printf("배열 합계 : %d\n", sum);

    return 0;
}