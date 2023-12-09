#include<iostream>
#include<string>
using namespace std;

class Book {
	char* title; // 제목 문자열
	int price; // 가격
public:
	Book(char* title, int price);
	Book(Book& other);
	~Book() { delete[] title; };
	void set(char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(char* title, int price)
{
	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);
	this->price = price;
}

Book::Book(Book& other)	//깊은 복사 생성자
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
	Book cpp((char*)"명품C++", 10000);
	Book java = cpp;
	java.set((char*)"명품자바", 12000);
	cpp.show();
	java.show();
}