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
		int n, m;
		cin >> n >> m;
		vector<int> unhappiness(n + 1);
		vector<int> Degrees(n + 1);
		vector<pair<int , int>>yarab;
		priority_queue<int, vector<int>, greater<int>>answer;
		for (int i = 1; i <= n; i++)
		{
			cin >> unhappiness[i];
		}
		for (int i = 0; i < m ; i++)
		{
			int x, y;
			cin >> x >> y;
			yarab.push_back( make_pair(x,y) );
			Degrees[x]++;
			Degrees[y]++;
		}
		if (m % 2 == 0)
		{
			cout << 0 << endl;
			continue;
		}
		for (int i = 1; i <= n; i++)
			if (Degrees[i] % 2 != 0 )
				answer.push(unhappiness[i]);
		
		for (int i = 0; i < m; i++)
		{
			// you can choose the least unhappines pair to remove as the m is odd so it will become even
			// but they have to be non odd vertices between the pair
			int x = yarab[i].first;
			int y = yarab[i].second;
			if (Degrees[x] % 2 == 0 && Degrees[y] % 2 == 0)
				answer.push(unhappiness[x] + unhappiness[y]);
		}
		cout <<  answer.top() << endl;
	}
	return 0;
}
