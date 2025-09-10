#include <iostream>
using namespace std;

int main() {
    // 문제 예시
    // 472 * 385
    int a, b;

    cin >> a >> b;

    // 472 * 5
    cout << a * (b % 10) << endl;
    // 472 * 8
    cout << a * ((b / 10) % 10) << endl;
    // 472 * 3
    cout << a * ((b / 100) % 10) << endl;
    // 472 * 385
    cout << a * b;

    return 0;
}