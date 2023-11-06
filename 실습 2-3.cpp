#include<iostream>
using namespace std;

bool bigger(int a, int b, int& big)	//레퍼런스 사용(big의 변경된 값을 메인문에 적용하기 위해)
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
	cout << "두 정수를 입력하세요>> ";
	cin >> x >> y;
	b = bigger(x, y, big);
	if (b)
		cout << "same" << endl;
	else
		cout << "큰 수는 " << big << endl;
}