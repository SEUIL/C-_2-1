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
	year = stoi(date); // 문자열을 정수로 변환하여 연도에 할당
	index = date.find('/'); // 첫 번째 '/'의 위치를 찾음
	month = stoi(date.substr(index + 1)); // '/' 다음에 오는 문자열을 월로 변환하여 할당
	index = date.find('/', index + 1); // 두 번째 '/'의 위치를 찾음
	day = stoi(date.substr(index + 1)); // 두 번째 '/' 다음에 오는 문자열을 날짜로 변환하여 할당
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
	Date birth(2014, 3, 20); // 2014년 3월 20일
	Date independenceDay("1945/8/15"); // 1945년 8월 15일
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}