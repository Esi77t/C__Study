#include <stdio.h>

int intarray() {
    int numbers[5];     // 정수형 배열 5개
    int sum = 0;

    // 배열 입력 받기
    for (int i = 0; i < 5; i++) {
        printf("숫자 %d 입력 : ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // 배열 출력
    printf("입력한 숫자들 : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n합계 : %d\n", sum);

    return 0;
}

int strarray() {
    char str[6];    // 5글자 + 종료문자 '\0'

    printf("문자열 입력 (최대 5글자) : ");
    scanf("%5s", str); // 최대 5글자 입력 제한

    printf("입력한 문자열 : %s\n", str);
    printf("문자 별 출력 : ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}

int main() {
    intarray();
    strarray();

    return 0;
}