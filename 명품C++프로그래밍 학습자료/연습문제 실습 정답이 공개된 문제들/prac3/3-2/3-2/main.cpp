#include <iostream>
#include <string>
using namespace std;

class Date {
	
public:
	int year, month, day;
	Date(int y,int m,int d);
	Date(string ymd);
	void show();
	int getYear();
	int getMonth();
	int getDay();

};

Date::Date(int y,int m, int d) {
	year = y;
	month = m;
	day = d;
}

Date::Date(string ymd) {
	int ind;
	year = stoi(ymd); //stoi : ���ڿ��� ������ ��ȯ
	ind = ymd.find('/'); //.find() : ���ڿ����� Ư�� �κ� ���ڿ��� �˻�
	month = stoi(ymd.substr(ind + 1)); //substr : Ư�� ���ڸ� ����
	ind = ymd.find('/', ind + 1);
	day = stoi(ymd.substr(ind + 1));
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
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}