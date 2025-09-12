#include <stdio.h>

int main()
{
    int num = 10; // 정수형 변수 'num'을 선언하고 10으로 초기화
    int *ptr;     // 정수형 포인터 'ptr' 선언

    ptr = &num; // ptr에 num 변수의 주소(&) 저장

    // 변수 num 정보 출력
    printf("변수 num의 값 : %d\n", num);
    printf("변수 num의 주소 : %p\n\n", &num);

    // 포인터 ptr 정보 출력
    printf("포인터 ptr에 저장된 값 (주소) : %p\n", ptr);
    printf("포인터 ptr이 가리키는 값 : %d\n\n", *ptr);

    // 포인터를 사용해서 num 변수 값을 변경
    *ptr = 20;

    // 값을 변경 후 num 정보를 다시 출력
    printf("포인터로 값을 변경한 후...\n");
    printf("변수 num의 새로운 값: %d\n", num);
    printf("포인터 ptr이 가리키는 새로운 값: %d\n", *ptr);

    return 0;
}