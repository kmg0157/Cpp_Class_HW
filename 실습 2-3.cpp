#include<iostream>
using namespace std;

bool bigger(int a, int b, int& big)	//���۷��� ���(big�� ����� ���� ���ι��� �����ϱ� ����)
{
	if (a > b) {
		big = a;
		return false;
	}
	else if (b > a)
	{
		big = b;
		return false;
	}
	else
		return true;
}

int main() 
{
	int x, y, big;
	bool b;
	cout << "�� ������ �Է��ϼ���>> ";
	cin >> x >> y;
	b = bigger(x, y, big);
	if (b)
		cout << "same" << endl;
	else
		cout << "ū ���� " << big << endl;
}