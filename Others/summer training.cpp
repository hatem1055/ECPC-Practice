#include <iostream>
#include<string>
using namespace std;
int main(){
	int size;
	cin >> size;
	string arr[6];
	for (size_t i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (size_t j = 0; j < size; j++)
	{
		if (arr[j].at(0) + arr[j].at(1) + arr[j].at(2) == arr[j].at(3) + arr[j].at(4) + arr[j].at(5))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

}
