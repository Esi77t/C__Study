#include <stdio.h>

int matrix1() {
    int matrix[2][3];
    int sum;

    // 배열 입력
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Matrix [%d][%d] 입력 : ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];    // 입력과 동시에 합계 계산
        }
    }

    // 배열 출력
    printf("\n입력한 배열 : \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("배열 합계 : %d\n", sum);

    return 0;
}

int strMatrix() {
    char names[3][10];  // 3개의 문자열, 최대 9글자 + 종료문자 '\0'

    // 입력
    for (int i = 0; i < 3; i++) {
        printf("%d번째 이름 입력 : ", i + 1);
        scanf("%9s", names[i]);     // 최대 9글자 제한
    }

    // 출력
    printf("\n입력한 이름 출력\n");
    for (int i = 0; i < 3; i++) {
        printf("names[%d] = %s\n", i, names[i]);
    }

    return 0;
}

int main() {
    matrix1();
    strMatrix();

    return 0;
}