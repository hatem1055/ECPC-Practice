/*

   _____                      ______        _____
  / ____|    /\        /\    |  ____ /\    |  __ \
 | |  __    /  \      /  \   | |__  /  \   | |__) |
 | | |_ |  / /\ \    / /\ \  |  __ / /\ \  |  _  /
 | |__| | / ____ \  / ____ \ | |  / ____ \ | | \ \
  \_____|/_/    \_\/_/    \_\|_| /_/    \_\|_|  \_\

*/

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
		long long n, k;
		cin >> n >> k;
		vector<int>odds;
		if (k % 2 != 0)
		{
			cout << "YES" << endl;
			for (int i = 1; i <= n; i += 2)
				cout << i << " " << i + 1 << endl;
		}
		else
		{
			if (k % 4 == 0)
				cout << "NO" << endl;
			else
			{
				cout << "YES" << endl;
				for (int i = 1; i < n; i += 2)
					odds.push_back(i);
				for (int i = 2; i <=n; i+= 2)
				{
					if ((i + k) % 4 == 0 & odds.size() != 0)
					{
						int x = odds.back();
						odds.pop_back();
						cout << i << " " << x << endl;
					}
					else if (i % 4 == 0 &odds.size() != 0)
					{
						int x = odds.back();
						odds.pop_back();
						cout << x << " " << i << endl;
					}
					else
						cout << i << " " << 1 << endl;
				}
			}
		}
	}
}
