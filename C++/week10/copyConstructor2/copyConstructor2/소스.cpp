#define _CRT_SECURE_NO_WARNINGS //���־� ��Ʃ������� strcpy�� ���� ������ ���� ���� ����
#include <iostream>
#include <string>
using namespace std;

class Person { // Person Ŭ���� ����
	string name;
	int id;
public:
	Person(int id, string name); // ������
	Person(Person& person); //���������
	~Person(); // �Ҹ���
	void changeName(string name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, string name) { // ������
	this->id = id;
	this->name = name;
	//int len = strlen(name); // name�� ���� ����
	//this->name = new char[len + 1]; // name ���ڿ� ���� ����
	//strcpy(this->name, name); // name�� ���ڿ� ����
}

Person::Person(Person& person) { //���������(���� ����, ����Ʈ���̱⿡ �����ص� ���ص� ������)
	this->id = person.id;
	this->name = person.name;
}

//Person::Person(Person& person) { //���������(���� ����, ���� ���� ����� ���غ���, 
//	this->id = person.id;		// �׸��� �������縦 ����� ������ ex5-10�� ���غ���
//	int len = strlen(person.name);
//	this->name = new char[len + 1];
//	strcpy(this->name, person.name);
//}

Person::~Person() {// �Ҹ���
	//if (name) // ���� name�� ���� �Ҵ�� �迭�� ������
	//	delete[] name; // ���� �Ҵ� �޸� �Ҹ�
}

void Person::changeName(string name) { // �̸� ����
	this->name = name;
}

int main() {
	Person father(1, "Kitae");			// (1) father ��ü ����
	Person daughter(father);			// (2) daughter ��ü ���� ����. ���� ������ ȣ��

	cout << "daughter ��ü ���� ���� ----" << endl;
	father.show();						// (3) father ��ü ���
	daughter.show();					// (3) daughter ��ü ���

	daughter.changeName("Grace");		// (4) 	daughter�� �̸��� "Grace"�� ����
	cout << "daughter �̸��� Grace�� ������ �� ----" << endl;
	father.show();						// (5) father ��ü ���
	daughter.show();					// (5) daughter ��ü ���

	return 0;							// (6), (7) daughter, father ��ü �Ҹ�
}