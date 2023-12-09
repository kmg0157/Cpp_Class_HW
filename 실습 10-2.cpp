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
	NamedCircle()
	{
		this->setRadius(0);
		this->name = "";
	}
	NamedCircle(int radius, string name) :Circle(radius)
	{
		setRadius(radius);
		this->name = name;
	}
	~NamedCircle() {}
	void show()
	{
		cout << "반지름이 " << getRadius() << "인 " << this->name << endl;
	}
	void setName(string name) { this->name = name; }
	string getName() { return this->name; }
};

int main()
{
	NamedCircle pizza[5];

	cout << "5개의 정수 반지름과 원의 이름을 입력하세요." << endl;
	for (int i = 0; i < 5; i++)
	{
		int r;
		string name;
		cout << i + 1 << ">>";
		cin >> r >> name;
		pizza[i].setRadius(r);
		pizza[i].setName(name);
	}

	int r_max = pizza[0].getRadius();
	int max_index = 0;

	for (int i = 1; i < 5; i++)
	{
		if (r_max < pizza[i].getRadius())
		{
			r_max = pizza[i].getRadius();
			max_index = i;
		}
	}
	cout << "가장 면적이 큰 피자는 " << pizza[max_index].getName() << "입니다." << endl;

	return 0;
}