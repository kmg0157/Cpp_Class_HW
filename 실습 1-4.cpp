#include <iostream>
using namespace std;
int main() {
	char c[100]; // �� ���ο� 100���� ���ڸ� ����ϴ�.
	int count = 0;
	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	cin.getline(c, 100);

	for (int i = 0; i < 100; i++)
	{
		if (c[i] == 'x')
		{
			count++;
		}
	}

	cout << 'x' << "�� ������ " << count << endl;
}