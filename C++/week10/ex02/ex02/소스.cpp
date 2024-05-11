#include <iostream>
using namespace std;

//// ���� ����
//void f(char c = ' ', int line = 1);
//
//// �Լ� ����
//void f(char c, int line) {
//	for (int i = 0; i < line; i++) {
//		for (int j = 0; j < 10; j++)
//			cout << c;
//		cout << endl;
//	}
//}
//
//int main() {
//	f(); 			// ���ٿ� ��ĭ�� 10�� ����Ѵ�.
//	f('%'); 		// �� �ٿ� '%'�� 10�� ����Ѵ�.
//	f('@', 5); // 5 �ٿ� '@' ���ڸ� 10�� ����Ѵ�.
//}

//-----------------------------------------------------------------------------


class Rect;
bool equals(Rect r, Rect s);        // equals() �Լ� ����

class Rect {                           // Rect Ŭ���� ����
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool equals(Rect r, Rect s); //frirend ����
};

bool equals(Rect r, Rect s) { // �ܺ� �Լ�
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}
