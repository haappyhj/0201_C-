#include<iostream>
using namespace std;

class Animal {
public:
	virtual void breathe() = 0;
};
class Mammal : public Animal {
public:
	void breed() {
		cout << "»õ³¢ ³ºÀ½" << endl;
	}

	void breathe() override {
		cout << "ÄÚ·Î ¼û½°" << endl;
	}
	};

class Bird : public Animal {
public:
	void breathe() override {
		cout << "³¯¸é¼­ ¼û½°" << endl;
	}
	void flapping() {
		cout << "ÆÄ´ÚÆÄ´Ú" << endl;
	}
};

class Bat :public Mammal, public Bird {
public:

	void breathe() {

	}
	void echoing() {
		cout << "ÃÊÀ½ÆÄ ¹ß»ç" << endl;
	}

};

int main() {
	Bat batman;

	batman.breathe();


}