#include <iostream>
using namespace std;

double biggest(double arr[],int size)
{
	double max = arr[0];
	for (int i = 1; i < size-1; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	return max;
}

int main() {
	double a[5];
	cout << "5 개의 실수를 입력하라>>";
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	cout << "제일 큰 수 = " << biggest(a, 5) << endl;
}