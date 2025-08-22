#include <stdio.h>

int main() {
    // 배열 선언
    int numbers[5] = {10, 20, 30, 40, 50};

    // 배열 원소 접근 및 출력
    for(int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // 배열 합 계산
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("배열의 합: %d\n", sum);

    return 0;
}