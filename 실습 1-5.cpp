#include <iostream>
//#include<string>
using namespace std;

int main() {
	char password1[100], password2[100];
	cout << "�� ��ȣ�� �Է��ϼ��� >>";
	cin.getline(password1,100);
	cout << "�� ��ȣ�� �ٽ� �ѹ� �Է��ϼ��� >> ";
	cin.getline(password2,100);

	if (strcmp(password1, password2) == 0)	//strcmp�� ������ 0 ��ȯ
	{
		cout << "�����ϴ�" << endl;
	}
	else
		cout << "���� �ʽ��ϴ�" << endl;
	
}