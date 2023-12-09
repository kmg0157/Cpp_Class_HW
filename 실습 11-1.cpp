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
	Shape* p[3];

	p[0] = new Oval("ºó´ë¶±", 10, 20);	//upcasting
	p[1] = new Rect("Âû¶±", 30, 40);
	p[2] = new Triangular("Åä½ºÆ®", 30, 40);

	for (int i = 0; i < 3; i++)
	{
		cout << p[i]->getName() << " ³ÐÀÌ´Â " << p[i]->getArea() << endl;
	}
	
	for (int i = 0; i < 3; i++)
	{
		delete p[i];
	}
	return 0;
}