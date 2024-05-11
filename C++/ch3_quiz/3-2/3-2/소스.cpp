#include <iostream>
#include <string>
using namespace std;

class Date {
public:
	int year;
	int month;
	int day;
	Date(int year, int month, int day);
	Date(string date);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;

}

Date::Date(string date) {
	int index;	
	year = stoi(date); // ���ڿ��� ������ ��ȯ�Ͽ� ������ �Ҵ�
	index = date.find('/'); // ù ��° '/'�� ��ġ�� ã��
	month = stoi(date.substr(index + 1)); // '/' ������ ���� ���ڿ��� ���� ��ȯ�Ͽ� �Ҵ�
	index = date.find('/', index + 1); // �� ��° '/'�� ��ġ�� ã��
	day = stoi(date.substr(index + 1)); // �� ��° '/' ������ ���� ���ڿ��� ��¥�� ��ȯ�Ͽ� �Ҵ�
}

void Date::show()
{
	cout << year << "��" << month << "��" << day << "��" << endl;
}
int Date::getYear()
{
	return year;
}
int Date::getMonth()
{
	return month;
}
int Date::getDay()
{
	return day;
}


int main() {
	Date birth(2014, 3, 20); // 2014�� 3�� 20��
	Date independenceDay("1945/8/15"); // 1945�� 8�� 15��
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}