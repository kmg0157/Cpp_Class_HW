#include <iostream>
using namespace std;

//제네릭 함수 add()
template T add() {

}


int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 };
	cout << "sum of x[] = " << << endl; // 배열 x와 원소 5개의 합을 계산
	cout << "sum of d[] = " << << endl; // 배열 d와 원소 6개의 합을 계산
}