#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime>

int main()
{
    srand(time(0)); // 난수 생성을 위한 시간을 시드로 사용
    int answerNumber = rand() % 100 + 1;
    int guess;
    int tries = 0;

    std::cout << "숫자 게임 시작! 1 ~ 100까지 숫자 중 하나를 골라서 맞춰주세요!" << std::endl;

    do
    {
        std::cout << "1 ~ 100까지의 숫자를 입력해주세요 : ";
        std::cin >> guess;
        tries++;

        if (guess > answerNumber)
        {
            std::cout << "DOWN!" << std::endl;
        }
        else if (guess < answerNumber)
        {
            std::cout << "UP!" << std::endl;
        }
        else
        {
            std::cout << "CORRECT! " << tries << " TRIES!" << std::endl;
        }
    } while (guess != answerNumber);

    return 0;
}