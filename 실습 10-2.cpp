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
		cout << "�������� " << getRadius() << "�� " << this->name << endl;
	}
	void setName(string name) { this->name = name; }
	string getName() { return this->name; }
};

int main()
{
	NamedCircle pizza[5];

	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���." << endl;
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
	cout << "���� ������ ū ���ڴ� " << pizza[max_index].getName() << "�Դϴ�." << endl;

	return 0;
}