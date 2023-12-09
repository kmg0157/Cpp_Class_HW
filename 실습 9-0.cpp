#include<iostream>
using namespace std;

class Complex {
	float re, im;
public:
	Complex() { re = im = 0; }
	Complex(float im, float re) { this->re = re; this->im = im; }
	Complex operator+(Complex in) {
		Complex tmp;
		tmp.re = this->re + in.re;
		tmp.im = this->im + in.im;
		return tmp;
	}
	Complex operator-(Complex in) {
		Complex tmp;
		tmp.re = this->re - in.re;
		tmp.im = this->im - in.im;
		return tmp;
	}

	void show()
	{
		cout.precision(5);
		if (im >= 0)
			cout << re << " + j" << im << endl;
		else
			cout << re << " - j" << -im << endl;
	}
};

int main()
{
	Complex X(2, 3), Y(3, 4), Z;
	Z = X + Y;
	Z.show();
	Z = X - Y;
	Z.show();
}