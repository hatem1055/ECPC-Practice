#include<iostream>
using namespace std;
int main() {
	int a, b, c, d;
	int size;
	//cin >> size;
	for (int i = 0; i < 4; i++) {
		cin >> a >> b >> c >> d;
	}
	for (int j = 0; j < 4; j++) {
		if (a > b && a > c && a > d)
			cout << "0";
		else if (a > b || a > c || a > d)
			cout << "1" << endl;
		else if (a < b && a < c || a < b && a < d || a < c && a < d)
			cout << "2" << endl;
		else
			cout << "3" << endl;
	}
}

