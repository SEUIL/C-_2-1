#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int getArea();
	int getGirth();
};

int Rectangle::getArea() {
	return width * height;
}

int Rectangle::getGirth() {
	return width * 2 + height * 2;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "�簢���� ������" << rect.getArea() << endl;
	cout << "�簢���� �ѷ���" << rect.getGirth() << endl;
}