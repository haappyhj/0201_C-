#include<iostream>
#include<string>
using namespace std;

class Wheel {
private:
    double radius;
public:
    Wheel() {
        this->radius = 10;
    }
    Wheel(double r) {
        this->radius = r;
    }
    void rotating() {
        cout << "굴렁굴렁" << endl;
    }
};

class Openable {
protected:
    bool isOpen;
public:
    virtual void open() = 0;
    virtual void close() = 0;
};

class Door : public Openable {
private:
    string material;
public:
    Door() {
        this->material = "steel";
    }
    Door(string m) {
        this->material = m;
    }

    void state() {
        cout << (this->isOpen ? "열림" : "닫힘") << endl;
    }

    void open() override {
        this->isOpen = true;
    }
    void close() {
        this->isOpen = false;
    }
};

class Window : public Openable {
private:
    string handling;
public:
    Window() {
        this->handling = "auto";
    }
    Window(string h) {
        this->handling = h;
    }

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
    Engine() {
        this->power = 100;
    }
    Engine(int p) {
        this->power = p;
    }
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
        this->engine = Engine(100);
        for (int i = 0; i < 4; i++) {
            this->wheels[i] = Wheel(10);
            this->doors[i] = Door("steel");
            this->windows[i] = Window("auto");
        }
    }

    void drive() {
        cout << "부릉부릉" << endl;
        cout << this->engine.operating() << "속력 내는중" << endl;
    }
};

class Taxi : public Car {
private:
    int passengers;
public:
    Taxi() : Car(), passengers(0) {

    }
    int showPassengers() {
        return this->passengers;
    }
    void openDoor() {
        this->doors[0].open();
    }

    void checkDoor() {
        for (int i = 0; i < 4; i++) {
            cout << i << "번째 문은";
            this->doors[i].state();
        }
    }


    void getPassengers(int n) {
        this->passengers = n;
    }
    void outPassengers() {
        this->passengers = 0;
    }
};

int main() {

    Taxi seoul_taxi;
    seoul_taxi.drive();
    seoul_taxi.openDoor();
    seoul_taxi.checkDoor();
}

