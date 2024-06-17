#include <iostream>
using namespace std;

class Circle {
private:
    int radius; // Circle 객체의 반지름을 저장하는 private 멤버 변수
public:
    Circle(); // 기본 생성자 선언
    Circle(int r); // 매개변수가 있는 생성자 선언
    ~Circle(); // 소멸자 선언
    double getArea() { return 3.14 * radius * radius; } // 원의 넓이를 계산하는 멤버 함수
    int getRadius() { return radius; } // 반지름 값을 반환하는 멤버 함수
    void setRadius(int radius) { this->radius = radius; } // 반지름 값을 설정하는 멤버 함수
};

// 기본 생성자 정의
Circle::Circle() {
    radius = 1; // 반지름을 1로 초기화
    cout << "생성자 실행 radius = " << radius << endl; // 생성자 호출 시 메시지 출력
}

// 매개변수가 있는 생성자 정의
Circle::Circle(int radius) {
    this->radius = radius; // 매개변수로 받은 값으로 반지름 초기화
    cout << "생성자 실행 radius = " << radius << endl; // 생성자 호출 시 메시지 출력
}

// 소멸자 정의
Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl; // 소멸자 호출 시 메시지 출력
}

// Circle 객체의 반지름을 1 증가시키는 함수 정의
void increase(Circle c) {
    int r = c.getRadius(); // 객체의 현재 반지름을 가져옴
    c.setRadius(r + 1); // 반지름을 1 증가시킴
}

int main() {
    Circle waffle(30); // 반지름이 30인 Circle 객체 waffle 생성
    increase(waffle); // waffle 객체를 increase 함수에 전달
    cout << waffle.getRadius() << endl; // waffle 객체의 반지름을 출력
    // increase 함수가 객체를 값으로 전달받기 때문에 원본 객체의 반지름은 변하지 않고, 30이 출력됨
}
