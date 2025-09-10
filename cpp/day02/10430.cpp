#include <iostream>

// 번거롭게 std::를 매번 붙이는 번거로움을 없앨 수 있다.
// 그래도 나중에는 명시적으로 넣어주는게 좋다
// using std::cout; 이나 using std::cin; 이런식으로
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    cout<< (a + b) % c <<endl<< ((a % c) + (b % c)) % c <<endl;
    cout<< (a * b) % c <<endl<< ((a % c) * (b % c)) % c;

    return 0;
}