#include <iostream>
#include <vector>
#include <string>

// struct(구조체)
// Student라는 새로운 데이터 타입을 만든다
// name은 학생 이름을 저장하기 위한 문자열 변수
// score는 학생 점수를 저장하기 위한 실수 변수
struct Student {
    std::string name;
    double score;
};

int main() {
    // vector
    // 배열과 비슷하지만 크기가 자유롭게 늘어나는 아주 유용한 컨테이너
    // 몇 명인지 미리 정하지 않아도, 정보를 입력할 때마다 vector에 추가할 수 있다.
    // std::vecotr는 cpp 표준 라이브러리 탬플릿 클래스이다.
    // <Student>는 이 벡터에 Student 타입의 데이터만 넣겠다는 지정한 것.
    // students는 벡터 변수.
    std::vector<Student> students;
    int numStudents;
    double totalScore = 0.0;

    std::cout << "몇 명의 학생을 입력하실건가요? : ";
    std::cin >> numStudents;

    // Student s는 반복문이 돌 때마다 s라는 새로운 Student 변수를 만든다
    // push_back() : students 벡터의 가장 마지막에 s 변수에 담긴 학생 정보를 추가한다.
    for(int i = 0; i < numStudents; i++) {
        Student s;
        std::cout << "학생 #" << i + 1 << "의 이름을 입력하세요.";
        std::cin >> s.name;
        std::cout << "학생 #" << i + 1 << "의 점수를 입력하세요.";
        std::cin >> s.score;
        students.push_back(s);
        totalScore += s.score;
    }

    if(!students.empty()) {
        double averageScore = totalScore / students.size();
        std::cout << "\n학생들의 평균은 " << averageScore << "점 입니다." << std::endl;
    } else {
        std::cout << "입력된 학생이 없습니다." << std::endl;
    }

    return 0;
}