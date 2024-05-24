#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Book;
bool operator < (string str, Book b);

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
	friend bool operator < (string title, Book book);
};
bool operator < (string title, Book book) {
	if (title < book.title) return true;
	else return false;
}

int main() {
	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>>";
	getline(cin, b);
	if (b < a)
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
	else
		cout << a.getTitle() << "이 " << b << "보다 앞에 있구나!";
	return 0;
}