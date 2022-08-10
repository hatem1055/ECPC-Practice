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
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (n % 2 == 0)
		{
			cout << "0 0 " << n / 2 << endl;
		}
		else
		{
			cout << "-1" << endl;
		}
	}
	return 0;
}
