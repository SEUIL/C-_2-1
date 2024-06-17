#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src)=0; // src�� �ٸ� ������ ��ȯ�Ѵ�.
	virtual string getSourceString()=0; // �ҽ� ���� ��Ī
	virtual string getDestString()=0; // dest ���� ��Ī
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class KmToMile : public Converter {
protected:
	virtual string getSourceString() { return "Km"; }
	virtual string getDestString() { return "Mile"; }
	virtual double convert(double src);
public:
	KmToMile(double ratio) : Converter(ratio) { }
};

double KmToMile::convert(double src) {
	return src/ratio;
}

int main() {
	KmToMile tomile(1.609344); // 1mile�� 1.609344 Km
	tomile.run();

    return 0;
}