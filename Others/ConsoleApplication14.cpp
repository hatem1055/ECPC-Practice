#include <iostream>
#include<string>
using namespace std;
void bubble_sort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{

			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}
int main()
{
	int y[3];
	int x[3];
	for (int i = 0; i < 3; i++) {
		int c = 0;
		cin >> c;
		x[i] = c;
		y[i] = c;
	}
	bubble_sort(x, 3);
	for (int i = 0; i < 3; i++) {
		cout << x[i] << endl;
	}
	cout << endl;
	for (int j = 0; j < 3; j++) {
		cout << y[j] << endl;
	}
}