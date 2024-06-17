#include <iostream>
using namespace std;

class Calculator {
public:
	virtual int add(int a, int b) = 0; // �� ������ �� ����
	virtual int subtract(int a, int b) = 0; // �� ������ �� ����
	virtual double average(int a [], int size) = 0; // �迭 a�� ��� ����. size�� �迭�� ũ��
};

class GoodCalc : public Calculator {
public:
	int add(int a, int b) { return a + b; }	
	int subtract(int a, int b) { return a - b; }	
	double average(int a [], int size) {
		double sum = 0;
		for(int i=0; i<size; i++) 
			sum += a[i];
		return sum/size;
	}	
};

int main() {
	int a[] = {1, 2, 3, 4, 5};// �迭 a ���� �� �ʱ�ȭ
	Calculator *p = new GoodCalc();// Calculator Ÿ���� ������ p�� GoodCalc ��ü �Ҵ�
	cout << p->add(2, 3) << endl;// add �޼��� ȣ�� �� ��� ���
	cout << p->subtract(2, 3) << endl;// subtract �޼��� ȣ�� �� ��� ���
	cout << p->average(a, 5) << endl;// average �޼��� ȣ�� �� ��� ���
	delete p;// ���� �Ҵ��� �޸� ����
}