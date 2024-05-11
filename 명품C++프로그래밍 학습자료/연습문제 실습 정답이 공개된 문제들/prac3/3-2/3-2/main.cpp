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
	year = stoi(ymd); //stoi : 문자열을 정수로 변환
	ind = ymd.find('/'); //.find() : 문자열에서 특정 부분 문자열을 검색
	month = stoi(ymd.substr(ind + 1)); //substr : 특정 문자를 추출
	ind = ymd.find('/', ind + 1);
	day = stoi(ymd.substr(ind + 1));
}

void Date::show()
{
	cout << year << "년" << month << "월" << day << "일" << endl;
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