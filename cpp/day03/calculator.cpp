#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiple(int a, int b) {
    return a * b;
}

double divide(double a, double b) {
    if(b == 0) {
        cout << "오류: 0으로 나눌 수 없습니다." << endl;
        return 0.0;
    } else {
        return a / b;
    }
}

int main() {
    char op;
    int a, b;

    cout << "연산자 하나를 입력해주세요. (+, -, x, /)" << endl;
    cin >> op;

    cout << "두 정수를 입력해주세요" << endl;
    cin >> a >> b;

    switch(op) {
        case '+':
            cout << "결과 : " << add(a, b) << endl;
            break;
        case '-':
            cout << "결과 : " << subtract(a, b) << endl;
            break;
        case 'x':
            cout << "결과 : " << multiple(a, b) << endl;
            break;
        case '/':
            // static_case 역할
            // 컴파일러가 논리적으로 형변환이 가능하다 판단하는 타입을 변환 수행함
            // 주로 int => double로, double => float으로 변환할 때 사용
            // void* 포인터와 다른 타입 포인터간의 변환할 때도 사용한다
            // void*는 어떤 타입이든 가리킬 수 있는 포인터 인데 이를 특정 타입의 포인터로 변환할 때 사용한다.
            // 그리고 자식 클래스 포인터를 부모 클래스 포인터로 변환할 때 사용한다.
            cout << "결과 : " << divide(static_cast<double>(a), static_cast<double>(b)) << endl;
            break;
    }

    return 0;
}