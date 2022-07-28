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


void solve()
{
	int n;
	cin >> n;
	long long positive = 0, negative = 0, zeros = 0;
	vector<long long > numbers;
	for (int i = 0; i < n; i++)
	{
		long long x;
		cin >> x;
		if (x > 0)
		{
			numbers.push_back(x);
			positive++;
		}
		else if (x < 0)
		{
			negative++;
			numbers.push_back(x);
		}	
		else
		{
			if (zeros < 2)
			{
				numbers.push_back(x);
				zeros++;
				
			}
		}
	}
	if (positive > 2 || negative > 2)
	{
		cout << "NO" << endl;
		return;
	}
	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			for (int k = j + 1; k < numbers.size(); k++)
			{
				bool ok = false;
				long long x = numbers[i] + numbers[j] + numbers[k];
				if (find(numbers.begin(), numbers.end() , x) != numbers.end())
					ok = true;
				if (!ok )
				{
					cout << "NO" << endl;
					return;
				}
			}
		}
	}
	cout << "YES" << endl;
}

int main() {

	int t; cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}
