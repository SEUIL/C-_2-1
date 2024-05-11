#include <iostream>
using namespace std;

class TV {
public:
	int channel;
	int volume;
	void incChannel(int n);
	void decChannel(int n);
	void incVolume(int n);
	void decVolume(int n);

};

void TV::incChannel(int n) {
	channel = channel + n;
}

void TV::decChannel(int n) {
	channel = channel - n;
}

void TV::incVolume(int n) {
	volume = volume + n;
}

void TV::decVolume(int n) {
	volume = volume - n;
}

int main() {
	TV mytv{};
	mytv.channel = 7;
	mytv.volume = 10;
	mytv.incChannel(3);
	mytv.decVolume(5);
	cout << "현재 채널 번호: " << mytv.channel << endl;
	cout << "현재 음량     : " << mytv.volume << endl;
}