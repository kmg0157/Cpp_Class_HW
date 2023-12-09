#include<iostream>
using namespace std;

class BaseArray {
private:
	int capacity; // 동적 할당된 메모리 용량
	int* mem; // 정수 배열을 만들기 위한 메모리 포인터
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
	cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mS.push(n); // 스택에 삽입
	}
	cout << "스택의 용량 : " << mS.capacity() << ", 스택의 크기 : " << mS.length() << endl;
	cout << "스택의 원소를 순서대로 제거하여 출력한다>> ";
	while (mS.length() != 0) {
		cout << mS.pop() << ' '; // 스택에서 제거하여 출력
	}
	cout << endl << "스택의 현재 크기 : " << mS.length() << endl;

	return 0;
}