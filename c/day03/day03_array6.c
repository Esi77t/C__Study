#include <stdio.h>

// #define
// 전처리기 매크로
// 값을 치환하는 상수
// 컴파일러가 코드를 실제로 컴파일 하기 전에 ROW, COL을 2와 3으로 바꿔버림
// 메모리 공간을 잡는 변수 역할을 하는게 아닌 단순 텍스트 치환이라고 생각하면 편할듯?
#define ROW 2
#define COL 3

// 2차원 배열 입력 함수
void inputMatrix(int matrix[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("matrix[%d][%d] 입력 : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// 2차원 배열 출력 함수
void printMatrix(int matrix[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }
}

// 합계 구하는 함수
int sumMatrix(int matrix[ROW][COL]) {
    int sum = 0;

    for (int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            sum += matrix[i][j];
        }
    }

    return sum;
}

int main() {
    int matrix[ROW][COL];

    inputMatrix(matrix);
    printf("\n입력한 배열\n");
    printMatrix(matrix);

    int sum = sumMatrix(matrix);
    printf("배열 합계 : %d\n", sum);

    return 0;
}