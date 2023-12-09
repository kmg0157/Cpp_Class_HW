#include<iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

void Swap(Circle& a, Circle& b)
{
	Circle tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void Swap2(Circle* a, Circle* b)
{
	Circle tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	Circle A(10), B(20);
	cout << "A의 면적 = " << A.getArea() << " B의 면적 = " << B.getArea() << endl;

	Swap(A, B);	//Swap2(&A, &B);
	
	cout << "A의 면적 = " << A.getArea() << " B의 면적 = " << B.getArea() << endl;

	return 0;
}