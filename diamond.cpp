#include<iostream>
using namespace std;

class Animal {
public:
	virtual void breathe() = 0;
};
class Mammal : public Animal {
public:
	void breed() {
		cout << "���� ����" << endl;
	}

	void breathe() override {
		cout << "�ڷ� ����" << endl;
	}
	};

class Bird : public Animal {
public:
	void breathe() override {
		cout << "���鼭 ����" << endl;
	}
	void flapping() {
		cout << "�Ĵ��Ĵ�" << endl;
	}
};

class Bat :public Mammal, public Bird {
public:

	void breathe() {

	}
	void echoing() {
		cout << "������ �߻�" << endl;
	}

};

int main() {
	Bat batman;

	batman.breathe();


}