#include<iostream>
#include<string>
using namespace std;

class Book {
	char* title; // ���� ���ڿ�
	int price; // ����
public:
	Book(char* title, int price);
	Book(Book& other);
	~Book() { delete[] title; };
	void set(char* title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }
};

Book::Book(char* title, int price)
{
	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);
	this->price = price;
}

Book::Book(Book& other)	//���� ���� ������
{
	this->title = new char[strlen(other.title) + 1];
	strcpy(this->title, other.title);
	this->price = other.price;
}

void Book::set(char* title, int price)
{
	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);
	this->price = price;
}

int main() {
	Book cpp((char*)"��ǰC++", 10000);
	Book java = cpp;
	java.set((char*)"��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}