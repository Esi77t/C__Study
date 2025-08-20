#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int scanSum() {
    int a;
    int b;

    printf("숫자를 입력해주세요 : \n");
    scanf("%d", &a);
    printf("숫자를 입력해주세요 : \n");
    scanf("%d", &b);

    int res = sum(a, b);

    printf("두 수의 합은 %d 입니다.\n", res);

    return 0;
}

int main() {
    scanSum();
    return 0;
}