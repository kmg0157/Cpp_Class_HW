#include<iostream>
using namespace std;

class BaseArray {
private:
	int capacity; // ���� �Ҵ�� �޸� �뷮
	int* mem; // ���� �迭�� ����� ���� �޸� ������
public:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }

	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyStack :public BaseArray {
	int size;
public:
	MyStack(int n) :BaseArray(n) { size = 0; }
	~MyStack() {}

	void push(int n)
	{
		put(size, n);
		size++;
	}
	int pop()
	{
		int tmp = get(size - 1);
		size--;
		return tmp;
	}
	int capacity()
	{
		return getCapacity();
	}
	int length()
	{
		return this->size;
	}
};

int main() {
	MyStack mS(100);
	int n;
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mS.push(n); // ���ÿ� ����
	}
	cout << "������ �뷮 : " << mS.capacity() << ", ������ ũ�� : " << mS.length() << endl;
	cout << "������ ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mS.length() != 0) {
		cout << mS.pop() << ' '; // ���ÿ��� �����Ͽ� ���
	}
	cout << endl << "������ ���� ũ�� : " << mS.length() << endl;

	return 0;
}