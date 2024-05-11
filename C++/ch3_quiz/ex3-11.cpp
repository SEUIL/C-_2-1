
class House {
	int numOfRooms;
	int size;
public:
	House(int n, int s);  // 생성자 , n과 s로 numOfRooms, size를 각각 초기화
	            
};

void f() {
	House a(2, 20);
}
House b(3, 30), c(4, 40);
int main()
{
	f();
	House d(5, 50);
}