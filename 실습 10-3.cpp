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

class MyQueue :public BaseArray {
	int size;
public:
	MyQueue(int n) :BaseArray(n) { size = 0; }
	~MyQueue() {}

	void enqueue(int n)
	{
		put(size, n);
		size++;
	}
	int dequeue()
	{
		int tmp = get(0);
		size--;
		for (int i = 0; i < size; i++) {
			put(i, get(i + 1));
		}
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
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n); // ť�� ����
	}
	cout << "ť�� �뷮 : " << mQ.capacity() << ", ť�� ũ�� : " << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' '; // ť���� �����Ͽ� ���
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}