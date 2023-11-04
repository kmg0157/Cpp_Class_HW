#include"Class.h"
#include<iostream>
using namespace std;

Adder::Adder(int a, int b) {
	op1 = a; op2 = b;
}
int Adder::process() {
	return op1 + op2;
}

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ���>>";
	int a, b;
	cin >> a >> b; // ���� �� �� �Է�
	Adder adder(a, b); // ������ ����
	cout << adder.process(); // ���� ���
}