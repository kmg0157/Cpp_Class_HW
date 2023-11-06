#include<iostream>
using namespace std;

char& find(char a[], char c, bool& success)
{
	success = false;

	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == c)
		{
			success = true;
			return a[i];
		}
	}
	static char tmp = a[0];
	return tmp;
}

int main()
{
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M을 발견할 수 없다" << endl;
	}
	loc = 'm'; // 'M' 위치에 'm' 기록
	cout << s << endl; // "mike"가 출력됨

	return 0;
}