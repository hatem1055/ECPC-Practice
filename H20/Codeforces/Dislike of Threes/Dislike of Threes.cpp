#include <iostream>
#include <vector>
#include <string>
#include <map>
#include<algorithm>
#include <set>
#include <cmath>
#include <queue>
#include<unordered_map>
using namespace std;


int main() {


	int t; cin >> t;
	vector<int> numbers;
	for (int i = 1; i <= 1700; i++)
	{
		string yarab = to_string(i);
		if (i % 3 != 0 && yarab.back() != '3')
		{
			numbers.push_back(i);
		}
	}

	while (t--)
	{
		int x;
		cin >> x;
		cout << numbers[--x] << endl;
	}



	return 0;
}
