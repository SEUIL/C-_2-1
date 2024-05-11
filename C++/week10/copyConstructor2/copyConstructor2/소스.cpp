#define _CRT_SECURE_NO_WARNINGS //비주얼 스튜디오에서 strcpy로 인한 오류를 막기 위한 선언문
#include <iostream>
#include <string>
using namespace std;

class Person { // Person 클래스 선언
	string name;
	int id;
public:
	Person(int id, string name); // 생성자
	Person(Person& person); //복사생성자
	~Person(); // 소멸자
	void changeName(string name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, string name) { // 생성자
	this->id = id;
	this->name = name;
	//int len = strlen(name); // name의 문자 개수
	//this->name = new char[len + 1]; // name 문자열 공간 핟당
	//strcpy(this->name, name); // name에 문자열 복사
}

Person::Person(Person& person) { //복사생성자(얕은 복사, 디폴트값이기에 생략해도 안해도 동일함)
	this->id = person.id;
	this->name = person.name;
}

//Person::Person(Person& person) { //복사생성자(깊은 복사, 위의 얕은 복사와 비교해볼것, 
//	this->id = person.id;		// 그리고 깊은복사를 만들기 이전인 ex5-10과 비교해볼것
//	int len = strlen(person.name);
//	this->name = new char[len + 1];
//	strcpy(this->name, person.name);
//}

Person::~Person() {// 소멸자
	//if (name) // 만일 name에 동적 할당된 배열이 있으면
	//	delete[] name; // 동적 할당 메모리 소멸
}

void Person::changeName(string name) { // 이름 변경
	this->name = name;
}

int main() {
	Person father(1, "Kitae");			// (1) father 객체 생성
	Person daughter(father);			// (2) daughter 객체 복사 생성. 복사 생성자 호출

	cout << "daughter 객체 생성 직후 ----" << endl;
	father.show();						// (3) father 객체 출력
	daughter.show();					// (3) daughter 객체 출력

	daughter.changeName("Grace");		// (4) 	daughter의 이름을 "Grace"로 변경
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show();						// (5) father 객체 출력
	daughter.show();					// (5) daughter 객체 출력

	return 0;							// (6), (7) daughter, father 객체 소멸
}