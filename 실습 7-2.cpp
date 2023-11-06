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
	
	Color* p;	//��ü ������ ����
	p = &screenColor;	//�����Ϳ� ��ü �Ҵ�
	p->show();	//�����ͷ� �����Լ� ����

	Color colors[3];	//ũ�Ⱑ 3�� ��ü �迭 ����
	p = colors;		//�����Ϳ� ��ü �迭�� �Ҵ�
	p[0].setColor(255, 0, 0);	//ù ��° �迭 red
	p[1].setColor(0, 255, 0);	//�� ��° �迭 green
	p[2].setColor(0, 0, 255);	//�� ��° �迭 blue

	for (int i = 0; i < 3; i++)
	{
		p[i].show();	//������� �����Լ� ����
	}
}