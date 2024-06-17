#include <iostream>
using namespace std;

class Circle {
private:
	int radius; 
public:
	Circle(); 
	Circle(int r);
	~Circle();
	double getArea()  { return 3.14*radius*radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
}; 

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = "  << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

// Circle 객체의 반지름을 1 증가시키는 함수 정의
// 객체를 참조로 전달받아 원본 객체를 수정할 수 있음!!
void increase(Circle &c) {
    int r = c.getRadius(); // 객체의 현재 반지름을 가져옴
    c.setRadius(r + 1); // 반지름을 1 증가시킴
}

int main() {
    Circle waffle(30); // 반지름이 30인 Circle 객체 waffle 생성
    increase(waffle); // waffle 객체를 increase 함수에 참조로 전달
    cout << waffle.getRadius() << endl; // waffle 객체의 반지름을 출력
    // increase 함수가 참조로 객체를 전달받았기 때문에 원본 객체의 반지름이 증가되어 31이 출력됨
}