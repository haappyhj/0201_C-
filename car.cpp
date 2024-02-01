#include<iostream>
#include<string>
using namespace std;
//has-a[Æ÷ÇÔ],is-a[»ó¼Ó]

class Wheel {
private:
	double radius;
public:
	Wheel():radius(0){}

	void rotating() {
		cout << "²Ü··²Ü··" << endl;
		
	}
};
class Openable {
protected:
	bool isOpen;
public:
	virtual void open() = 0;
	virtual void close() = 0;
};

class Door:public Openable {
private:
	string material;

public:
Door():material("no") {}

	void open() override {
		this->isOpen = true;
	}
	void close() {
		this->isOpen = false;
	}
};

class Window :public Openable {
private:
	string handling;
public:
	Window():handling("auto") {}

	void open() override {
		this->isOpen = true;
	}
	void close() {
		this->isOpen = false;
	}

};

class Engine {
private:
	int power;
public:
	Engine() :power(5){}
	int operating() {
		return this->power;
	}

};


class Car {
protected:
	Wheel wheels[4];
	Door doors[4];
	Window windows[4];
	Engine engine;

public:
	Car() {
		this->engine ;
		for (int i = 0; i < 4; i++) {
			this->wheels[i] ;
			this->doors[i] ;
			this->windows[i];
		}
		

		
		
	}
	void drive() {
		cout << "ºÎ¸ªºÎ¸ª" << endl;
		cout << this->engine.operating() + "¼Ó·Â ³»´Â Áß" << endl;

	}

};


class Taxi :public Car {
private:
	int passengers;

public:
	int Passenger;
	void getPsddengers(int n) {
		this->passengers = n;
	}
	void outPassengers() {
		this->passengers = 0;
	}
};

int main() {
	Taxi seoul_taxi();
}

