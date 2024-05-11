#pragma once
class Circle {
public:
	int radius;
	Circle();       // 매개 변수 없는 생성자
	Circle(int r); // 매개 변수 있는 생성자
	double getArea();
};