#pragma once

#ifndef TEST_H
#define TEST_H

class Adder { // ���� ��� Ŭ����
	int op1, op2;
public:
	Adder(int a, int b);
	int process();
};

class Calculator { // ���� Ŭ����
public:
	void run();
};

#endif // !TEST_H