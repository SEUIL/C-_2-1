#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {
	Circle donut;
	donut.setRadius(100);
	double d = donut.getArea();
	
	Circle* p;
	p = &donut;
	d = p->getArea();
	cout << d << endl;

	d = (*p).getArea();
	cout << d << endl;

	Circle pizza(50);
	p = &pizza;
	cout << pizza.getArea() << endl;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;


}
