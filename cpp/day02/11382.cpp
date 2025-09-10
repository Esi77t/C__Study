#include <iostream>
using namespace std;

int main() {
    // 문제 조건중 하나가 10의 12승까지 넣을 수 있어야 한다고 하는데 int를 넣게되면 10의 9승까지 밖에 안되므로
    // long long을 넣어서 해결을 해야한다고 함
    long long a, b, c;

    cin >> a >> b >> c;

    cout << a + b + c << endl;

    return 0;
}