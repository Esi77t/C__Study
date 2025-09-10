#include <iostream>

int main() {
    for(int i = 0; i < 3; i++) {
        std::cout<< "반복" << i << "번째" <<std::endl;
    }

    int j = 0;
    while(j < 3) {
        std::cout<< "반복문입니다." <<std::endl;
        j++;
    }

    return 0;
}