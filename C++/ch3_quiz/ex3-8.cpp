#include <iostream>
using namespace std;

class Calendar {
private:
	int year;
public:
	Calendar();
	int getYear();
};

int main()
{
	Calendar c;
	cout << c.getYear() << endl;
}