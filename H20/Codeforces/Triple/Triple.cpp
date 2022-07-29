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
	while (t--)
	{
		int n;
		cin >> n;
		map<int, vector<int>> yarab;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			yarab[x].push_back(0);
		}
		bool ok = false;
		for (auto it : yarab)
		{
			if (it.second.size() > 2)
			{
				cout << it.first << endl;
				ok = true;
				break;
			}
		}
		if (ok == false)
		{
			cout << -1 << endl;
		}
	}


	return 0;
}
