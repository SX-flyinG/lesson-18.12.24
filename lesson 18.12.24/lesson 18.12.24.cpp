#include <iostream>

using namespace std;

class IMovable {
public :
	virtual void Move() = 0;
};

class IDrivable {
public :
	virtual void Drive() = 0;
}; 
 
class IFlyable {
public :
	virtual void Fly() = 0;
};

class ISwimable {
public:
	virtual void Swim() = 0;
};

class Human : public IMovable{
public: 
	void Move() override {
		cout << "Person can move" << endl;
	}
 };

class Car : public IDrivable {
public:
	void Drive() override {
		cout << "Car can drive" << endl;
	}
};

class Ship : public ISwimable {
public:
	void Swim() override {
		cout << "Ship can swim" << endl;
	}
};
class Flying : public IFlyable {
public:
	void Fly() override {
		cout << "flying can fly" << endl;
	}
};


int main() {
	IMovable* ptr = new Human();
	ptr->Move();
	IDrivable* ptr2 = new Car();
	ptr2->Drive();
	IFlyable* ptr3 = new Flying();
	ptr3->Fly();
	ISwimable* ptr4 = new Ship();
	ptr4->Swim();
}
