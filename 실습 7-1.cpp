#include<iostream>
using namespace std;

class Circle {
	int radius; // ���� ������ ��

public:
	Circle();
	~Circle();
	void setRadius(int radius); // �������� �����Ѵ�.
	double getArea(); // ������ �����Ѵ�.
};

void Circle::setRadius(int radius)
{
	this->radius = radius;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle cir[3];

	cout << "�� 1�� ������ >> ";
	cin >> cir[0]->radius;
	cout << "�� 2�� ������ >> ";
	cin >> cir[1]->radius;
	cout << "�� 3�� ������ >> ";
	cin >> cir[2]->radius;


}