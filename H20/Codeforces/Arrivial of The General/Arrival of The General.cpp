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


int  main()
{
	int n;
	cin >> n;
	vector<int>soliders(n);
	int maxi = 0;
	int mini = 200;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		soliders[i] = x;
		maxi = max(maxi, x);
		mini = min(mini, x);
	}
	int max_index;
	int min_index;
	for (int i = 0; i < n; i++)
	{
		if (soliders[i] == maxi)
		{
			max_index = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (soliders[i] == mini)
		{
			min_index = i;
			break;
		}
	}

	if (min_index > max_index)
		cout << max_index + (n - min_index - 1) << endl;
	else
		cout << max_index + (n - (++min_index) - 1) << endl;
}