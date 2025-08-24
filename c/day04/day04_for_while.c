#include <stdio.h>

int main() {
    // 간단한 구구단 반복문
    for (int i = 2; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }


    int cnt = 10;

    while (cnt > 0) {
        printf("%d 입니다.\n", cnt);
        cnt--;
    }
    
    return 0;
}