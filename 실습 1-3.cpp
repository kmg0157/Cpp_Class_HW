#include <iostream>
using namespace std;

double biggest(double arr[],int size)
{
	double max = arr[0];
	for (int i = 1; i < size; i++)
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
	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	cout << "���� ū �� = " << biggest(a, 5) << endl;
}