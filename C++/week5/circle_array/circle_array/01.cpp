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
	cout << "积己磊 角青 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "积己磊 角青 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "家戈磊 角青 radius = " << radius << endl;
}

int main() {
	Circle cc[3];

	cc[0].setRadius(10);
	cc[1].setRadius(20);
	cc[2].setRadius(30);

	for (int i = 0; i < 3; i++)
		cout << cc[i].getArea() << endl;
	
	Circle* p;
	p = cc;
	for (int i = 0; i < 3; i++){
		cout << p -> getArea() << endl;
		p++;
	}

	for (int i = 0; i < 3; i++) {
		cout << p[i].getArea() << endl;
		p++;
	}

	Circle dd[3] = { Circle(10),Circle(20) ,Circle() };

	for (int i = 0; i < 3; i++) {
		cout << dd[i].getArea() << endl;
	}
}

