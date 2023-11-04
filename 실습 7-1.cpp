#include<iostream>
using namespace std;

class Circle {
	int radius; // 원의 반지름 값

public:
	Circle();
	~Circle();
	void setRadius(int radius); // 반지름을 설정한다.
	double getArea(); // 면적을 리턴한다.
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

	cout << "원 1의 반지름 >> ";
	cin >> cir[0]->radius;
	cout << "원 2의 반지름 >> ";
	cin >> cir[1]->radius;
	cout << "원 3의 반지름 >> ";
	cin >> cir[2]->radius;


}