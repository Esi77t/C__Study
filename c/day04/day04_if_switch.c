#include <stdio.h>
#include <stdbool.h>

int main() {
    // 간단하게 써보는 if문
    bool varbool = true;

    if(varbool) {
        printf("true입니다.\n");
    } else {
        printf("false입니다.\n");
    }

    // 간단하게 써보는 switch 문
    int switchInt = 4;

    switch (switchInt)
    {
    case 1:
        printf("1입니다.\n");
        break;
    case 2:
        printf("2입니다.\n");
        break;
    case 3:
        printf("3입니다.\n");
        break;
    default:
        printf("어떤 숫자도 아닙니다.\n");
        break;
    }

    return 0;
}