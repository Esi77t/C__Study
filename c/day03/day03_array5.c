#include <stdio.h>

// 합계를 구하는 함수
int getSum(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

// 배열 출력 함수
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main() {
    int numbers[5];

    // 입력
    for (int i = 0; i < 5; i++) {
        printf("%d번째 숫자 입력 : ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // 출력
    printf("배열 출력 : ");
    printArray(numbers, 5);

    // 합계
    int sum = getSum(numbers, 5);
    printf("배열 합계 : %d\n", sum);

    return 0;
}