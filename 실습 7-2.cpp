#include<iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};

int main()
{
	Color screenColor(255, 0, 0);	//red
	
	Color* p;	//객체 포인터 생성
	p = &screenColor;	//포인터에 객체 할당
	p->show();	//포인터로 전역함수 접근

	Color colors[3];	//크기가 3인 객체 배열 생성
	p = colors;		//포인터에 객체 배열을 할당
	p[0].setColor(255, 0, 0);	//첫 번째 배열 red
	p[1].setColor(0, 255, 0);	//두 번째 배열 green
	p[2].setColor(0, 0, 255);	//세 번째 배열 blue

	for (int i = 0; i < 3; i++)
	{
		p[i].show();	//순서대로 전역함수 접근
	}
}