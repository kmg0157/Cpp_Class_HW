#include <iostream>
using namespace std;
int main() {
	char c[100]; // 한 라인에 100개의 문자면 충분하다.
	int count = 0;
	cout << "문자들을 입력하라(100개 미만)." << endl;
	cin.getline(c, 100);

	for (int i = 0; i < sizeof(c)/sizeof(char); i++)
	{
		if (c[i] == 'x')
		{
			count++;
		}
	}

	cout << 'x' << "의 개수는 " << count << endl;
}