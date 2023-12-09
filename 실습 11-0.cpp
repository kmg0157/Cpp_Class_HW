#include<iostream>
using namespace std;

class Shape {
	string name;
public:
	virtual float getArea() { return 0.0; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
	// ±× ¿Ü ÇÊ¿äÇÑ °Í Ãß°¡
};

class Oval :public Shape {
	int a, b;
public:
	Oval(string name, int a, int b) 
	{
		this->a = a;
		this->b = b;
		setName(name);
	}
	virtual float getArea() { return 3.14 * a * b; }
};

class Rect :public Shape {
	int a, b;
public:
	Rect(string name, int a, int b)
	{
		this->a = a;
		this->b = b;
		setName(name);
	}
	virtual float getArea() { return a * b; }
};

class Triangular :public Shape {
	int a, b;
public:
	Triangular(string name, int a, int b)
	{
		this->a = a;
		this->b = b;
		setName(name);
	}
	virtual float getArea() { return (a * b) / 2; }
};

int main()
{
	Oval* p0;
	Rect* p1;
	Triangular* p2;
	p0 = new Oval("ºó´ë¶±", 10, 20);
	p1 = new Rect("Âû¶±", 30, 40);
	p2 = new Triangular("Åä½ºÆ®", 30, 40);
	cout << p0->getName() << " ³ÐÀÌ´Â " << p0->getArea() << endl;
	cout << p1->getName() << " ³ÐÀÌ´Â " << p1->getArea() << endl;
	cout << p2->getName() << " ³ÐÀÌ´Â " << p2->getArea() << endl;
	delete p0; delete p1; delete p2;

	return 0;
}