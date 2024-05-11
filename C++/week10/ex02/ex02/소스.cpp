#include <iostream>
using namespace std;

//// 원형 선언
//void f(char c = ' ', int line = 1);
//
//// 함수 구현
//void f(char c, int line) {
//	for (int i = 0; i < line; i++) {
//		for (int j = 0; j < 10; j++)
//			cout << c;
//		cout << endl;
//	}
//}
//
//int main() {
//	f(); 			// 한줄에 빈칸을 10개 출력한다.
//	f('%'); 		// 한 줄에 '%'를 10개 출력한다.
//	f('@', 5); // 5 줄에 '@' 문자를 10개 출력한다.
//}

//-----------------------------------------------------------------------------


class Rect;
bool equals(Rect r, Rect s);        // equals() 함수 선언

class Rect {                           // Rect 클래스 선언
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool equals(Rect r, Rect s); //frirend 선언
};

bool equals(Rect r, Rect s) { // 외부 함수
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}
