#include<iostream>
using namespace std;

int big(int a, int b, int c = 100) {
	int max = 0;

	max = a > b ? a : b;
	max = max > c ? c : max;
	return max;
}

int main() 
{
	int x = big(3, 5); // 3과 5중큰값 5는 최대값 100보다 작으므로, 5 리턴
	int y = big(300, 60); // 300과 60중큰값 300이 최대값 100보다 크므로, 100 리턴
	int z = big(30, 60, 50); // 30과 60 중큰값 60이 최대값 50보다 크므로, 50 리턴
	cout << x << ' ' << y << ' ' << z << endl;
}