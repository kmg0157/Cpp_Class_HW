#include <iostream>
using namespace std;

class Person {
	int money;
	string name;
public:
	static int sharedMoney;

	Person() { this->money = 0; }
	Person(string name_in) { this->money = 0; this->name = name_in; }
	~Person() { cout << this->name << " " << this->money << endl; }
	
	void addMoney(int money_in) { money += money_in; }
	static void addShared(int sharedmoney_in) { sharedMoney += sharedmoney_in; }
};

int Person::sharedMoney = 0;	//���������� �ݵ�� ���� �������� �ʱ�ȭ

int main() {
	Person A("KANG"), B("KIM");

	// 3��
	A.addMoney(100);
	A.addShared(5);
	B.addMoney(200);
	B.addShared(5);

	// 4��
	A.addMoney(100);
	A.addShared(5);
	B.addMoney(200);
	B.addShared(5);

	cout << "���� = " << Person::sharedMoney << endl;

	Person::addShared(100);
	cout << "���� = " << Person::sharedMoney << endl;
}