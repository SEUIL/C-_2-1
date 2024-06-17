#include <iostream>
using namespace std;

class Calculator {
public:
	virtual int add(int a, int b) = 0; // 두 정수의 합 리턴
	virtual int subtract(int a, int b) = 0; // 두 정수의 차 리턴
	virtual double average(int a [], int size) = 0; // 배열 a의 평균 리턴. size는 배열의 크기
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
	int a[] = {1, 2, 3, 4, 5};// 배열 a 선언 및 초기화
	Calculator *p = new GoodCalc();// Calculator 타입의 포인터 p에 GoodCalc 객체 할당
	cout << p->add(2, 3) << endl;// add 메서드 호출 및 결과 출력
	cout << p->subtract(2, 3) << endl;// subtract 메서드 호출 및 결과 출력
	cout << p->average(a, 5) << endl;// average 메서드 호출 및 결과 출력
	delete p;// 동적 할당한 메모리 해제
}