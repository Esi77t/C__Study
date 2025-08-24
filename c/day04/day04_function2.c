#include <stdio.h>
#include <stdbool.h>

// 숫자 판별 함수
void checkNumber(int num) {
    if (num > 0) {
        printf("%d는 양수입니다.\n", num);
    } else if (num < 0) {
        printf("%d는 음수입니다.\n", num);
    } else {
        printf("0입니다.");
    }
}

// 요일 출력 함수
void printDay(int day) {
    switch (day)
    {
    case 1:
        printf("월요일입니다.\n");
        break;
    case 2:
        printf("화요일입니다.\n");
        break;
    case 3:
        printf("수요일입니다.\n");
        break;
    case 4:
        printf("목요일입니다.\n");
        break;
    case 5:
        printf("금요일입니다.\n");
        break;
    case 6:
        printf("토요일입니다.\n");
        break;
    case 7:
        printf("일요일입니다.\n");
        break;
    default:
        printf("잘못된 입력입니다.\n");
        break;
    }
}

// 구구단 출력 함수(2차원 배열 사용)
void printMultiplicationTable() {
    int table[8][9];    // 2 ~ 9단, 1 ~ 9 곱

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 9; j++) {
            table[i][j] = (i + 2) * (j + 1);
            printf("%d x %d = %d\n", i + 2, j + 1, table[i][j]);
        }
        printf("\n");
    }
}

// 숫자 카운트 다운 함수
void countdown(int start) {
    int i = start;
    while (i > 0)
    {   
        printf("%d", i);
        i--;
    }
    
    printf("\n");
}

int main() {
    int num;
    printf("숫자를 입력해주세요 : ");
    scanf("%d", &num);
    checkNumber(num);   // 숫자 판별

    int day;
    printf("요일 숫자를 입력해주세요 (1 ~ 7) : ");
    scanf("%d", &day);
    printDay(day);  // 요일 출력

    printf("\n구구단 출력\n");
    printMultiplicationTable();

    printf("\n5부터 1까지 카운트다운\n");
    countdown(5);

    return 0;
}