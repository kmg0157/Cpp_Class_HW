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
		cout << "M�� �߰��� �� ����" << endl;
	}
	loc = 'm'; // 'M' ��ġ�� 'm' ���
	cout << s << endl; // "mike"�� ��µ�

	return 0;
}