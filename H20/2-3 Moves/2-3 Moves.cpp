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


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		if (n == 1)
		{
			cout << 2 << endl;
		}
		else if (n % 3 == 0)
		{
			cout << n / 3 << endl;
		}
		else
		{
			cout << n / 3 + 1 << endl;
		}

	}
}