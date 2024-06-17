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
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = "  << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

// Circle ��ü�� �������� 1 ������Ű�� �Լ� ����
// ��ü�� ������ ���޹޾� ���� ��ü�� ������ �� ����!!
void increase(Circle &c) {
    int r = c.getRadius(); // ��ü�� ���� �������� ������
    c.setRadius(r + 1); // �������� 1 ������Ŵ
}

int main() {
    Circle waffle(30); // �������� 30�� Circle ��ü waffle ����
    increase(waffle); // waffle ��ü�� increase �Լ��� ������ ����
    cout << waffle.getRadius() << endl; // waffle ��ü�� �������� ���
    // increase �Լ��� ������ ��ü�� ���޹޾ұ� ������ ���� ��ü�� �������� �����Ǿ� 31�� ��µ�
}