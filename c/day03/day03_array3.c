#include <stdio.h>

int matrix1() {
    // 2행 3열 배열 선언
    int matrix[2][3] = {    // 2행 3열
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2; i++) {       // 행 반복
        for (int j = 0; j < 3; j++) {   // 열 반복
            printf("%d ", matrix[i][j]);    // i번째 행, j번째 열 원소 접근
        }
        printf("\n");
    }

    return 0;
}

int matrix2() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int sum = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }

    printf("배열의 합 : %d\n", sum);

    return 0;
}

int namesMatrix() {
    char names[3][10] = {   // 3개의 문자열, 각 문자열 최대 9글자 + 종류문자 '\0'
        "Alice",
        "Bob",
        "Charlie"
    };

    for (int i = 0; i < 3; i++) {
        printf("names[%d] = %s\n", i, names[i]);
    }

    return 0;
}

int main() {
    matrix1();
    matrix2();
    namesMatrix();

    return 0;
}