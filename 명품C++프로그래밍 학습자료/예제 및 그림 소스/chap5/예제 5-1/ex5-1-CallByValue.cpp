#include <iostream>
using namespace std;

class Circle {
private:
    int radius; // Circle ��ü�� �������� �����ϴ� private ��� ����
public:
    Circle(); // �⺻ ������ ����
    Circle(int r); // �Ű������� �ִ� ������ ����
    ~Circle(); // �Ҹ��� ����
    double getArea() { return 3.14 * radius * radius; } // ���� ���̸� ����ϴ� ��� �Լ�
    int getRadius() { return radius; } // ������ ���� ��ȯ�ϴ� ��� �Լ�
    void setRadius(int radius) { this->radius = radius; } // ������ ���� �����ϴ� ��� �Լ�
};

// �⺻ ������ ����
Circle::Circle() {
    radius = 1; // �������� 1�� �ʱ�ȭ
    cout << "������ ���� radius = " << radius << endl; // ������ ȣ�� �� �޽��� ���
}

// �Ű������� �ִ� ������ ����
Circle::Circle(int radius) {
    this->radius = radius; // �Ű������� ���� ������ ������ �ʱ�ȭ
    cout << "������ ���� radius = " << radius << endl; // ������ ȣ�� �� �޽��� ���
}

// �Ҹ��� ����
Circle::~Circle() {
    cout << "�Ҹ��� ���� radius = " << radius << endl; // �Ҹ��� ȣ�� �� �޽��� ���
}

// Circle ��ü�� �������� 1 ������Ű�� �Լ� ����
void increase(Circle c) {
    int r = c.getRadius(); // ��ü�� ���� �������� ������
    c.setRadius(r + 1); // �������� 1 ������Ŵ
}

int main() {
    Circle waffle(30); // �������� 30�� Circle ��ü waffle ����
    increase(waffle); // waffle ��ü�� increase �Լ��� ����
    cout << waffle.getRadius() << endl; // waffle ��ü�� �������� ���
    // increase �Լ��� ��ü�� ������ ���޹ޱ� ������ ���� ��ü�� �������� ������ �ʰ�, 30�� ��µ�
}
