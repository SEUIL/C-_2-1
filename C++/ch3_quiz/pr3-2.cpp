#include <iostream>
#include <string>
using namespace std;

class Date {
	int date[3];
	string day;
public:
	Date(int date[0],int date[1],int date[2]);
	Date(string day);
	void show() {};
};

void Date::show() {
	for (int i = 0; i < 3; i++) {

	}
}

int main() {
	Date birth(2014, 3, 20); // 2014�� 3�� 20��
	Date independenceDay("1945/8/15"); // 1945�� 8�� 15��
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}