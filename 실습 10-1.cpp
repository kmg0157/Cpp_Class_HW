#include<iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int r) { this->radius = r; }
	int getRadius() { return radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius, string name):Circle(radius)
	{
		setRadius(radius);
		this->name = name;
	}
	~NamedCircle() {}
	void show()
	{
		cout << "반지름이 " << getRadius() << "인 " << this->name << endl;
	}
};
int main()
{
	NamedCircle waffle(3, "waffle"); // 반지름이 3이고 이름이 waffle인 원
	waffle.show();
}