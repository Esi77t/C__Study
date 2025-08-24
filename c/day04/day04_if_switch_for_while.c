#include <stdio.h>
#include <stdbool.h>

int main()
{
    // if문
    int num;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("입력한 숫자는 양수입니다.\n");
    }
    else if (num < 0)
    {
        printf("입력한 숫자는 음수입니다.\n");
    }
    else
    {
        printf("입력한 숫자는 0입니다.\n");
    }

    // switch문
    int day;
    printf("요일을 숫자로 입력해주세요(1. 월요일, 2. 화요일 ... 7. 일요일) : ");
    scanf("%d", &day);

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


    // for문
    printf("\n1부터 5까지 출력(for문)\n");
    for(int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n5부터 1까지 출력(while문)\n");
    int whileint = 5;
    while (whileint > 0)
    {
        printf("%d ", whileint);
        whileint--;
    }
    printf("\n");

    return 0;
}