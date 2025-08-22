#include <stdio.h>
#include <limits.h>     // 정수형 자료형의 최소/최대값 상수 제공
#include <float.h>      // 실수형 자료형의 최소/최대값 상수 제공
#include <stdbool.h>    // 논리형 관련 정의 제공

int main() {
    // 정수형
    int i = 100;
    short s = 3000;
    long l = 1000000000;
    long long ll = 900000000000000000LL;
    unsigned int ui = 4000000000U;      // unsigned : 부호 없는 자료형을 만들 때 사용
                                        // 기본적으로 정수형에는 부호(+, -)가 붙는데 unsigned를 선언하면 양수만 사용할 것을 선언하며
                                        // 양수형의 값 역시 두배로 늘어난다.
                                        // 오직 정수형에만 가능하다.
                                        // (signed) int : -2,147,483,648 ~ 2,147,483,647
                                        // unsigned int : 0 ~ 4,294,967,295
    char c = 'A';
    unsigned char uc = 255;

    // 실수형
    float f = 3.141592f;
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238L;

    // 논리형
    _Bool flag = 1;     // C언어는 true, false가 아닌 0과 1로 저장
                        // 이는 C언어가 컴퓨터와 가까운 저수준 언어기 때문

    // 출력
    printf("int: %d (min: %d, max: %d)\n", i, INT_MIN, INT_MAX);
    printf("short: %d (min: %d, max: %d)\n", s, SHRT_MIN, SHRT_MAX);
    printf("long: %ld (min: %ld, max: %ld)\n", l, LONG_MIN, LONG_MAX);
    printf("long long: %lld (min: %lld, max: %lld)\n", ll, LONG_LONG_MIN, LONG_LONG_MAX);
    printf("unsigned int: %u (max: %u)\n", ui, UINT_MAX);
    printf("char: %c, (min: %d, max: %d)\n", c, CHAR_MIN, CHAR_MAX);
    printf("unsigned char: %u, (max: %u)\n", uc, UCHAR_MAX);

    printf("float: %f (min: %e, max: %e)\n", f, FLT_MIN, FLT_MAX);
    printf("double: %lf (min: %e, max: %e)\n", d, DBL_MIN, DBL_MAX);
    printf("long double: %Lf (min: %Le, max: %Le)\n", ld, LDBL_MIN, LDBL_MAX);

    printf("_Bool flag: %d\n", flag);

    return 0;
}