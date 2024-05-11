#include <iostream>
using namespace std;

int main() {
	int a[3] = { 10,20,30 };

	for (int i = 0; i < 3; i++)cout << a[i] << endl; // 10 20 30

	for (int i = 0; i < 3; i++)cout << *(a+1) << endl; //20 20 20
	int* p = a;

	for (int i = 0; i < 3; i++)cout << p[i] << endl; //10 20 30

	for (int i = 0; i < 3; i++)cout << *(p+i)<< endl; // 10 20 30

	for (int i = 0; i < 3; i++) {
		cout << *p << endl; // 10 20 30
		p++;
	}

	/*
	for (int i = 0; i < 3; i++) {
		cout << *a << endl; 
		a++; //에러 , 배열 이름의 연산은 불가함
	}
	*/
}