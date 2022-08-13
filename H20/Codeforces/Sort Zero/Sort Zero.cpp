/*

   _____                     ______        _____
  / ____|   /\        /\    |  ____ /\    |  __ \
 | |  __   /  \      /  \   | |__  /  \   | |__) |
 | | |_ | / /\ \    / /\ \  |  __ / /\ \  |  _  /
 | |__| |/ ____ \  / ____ \ | |  / ____ \ | | \ \
  \_____/_/    \_\/_/    \_\|_| /_/    \_\|_|  \_\

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
		int n;
		cin >> n;
		vector<int> numbers(n+1);
		map<int, priority_queue<int>> index{};
		set<int> yarab;
		vector<int>prefix(n+1);
		for (int i = 1; i <= n; i++)
		{
			cin >>numbers[i];
			yarab.insert(numbers[i]);
			index[numbers[i]].push(i);
			prefix[i] = yarab.size();
		}
	
		int answer = 0;
		bool end = false;
		
		

		for (int i = n - 1; i > 0; i--)
		{
			if (numbers[i] > numbers[i+1] && end == false)
			{
				end = true;
			}
			if (end)
			{
				int x = numbers[i];
				answer = max(answer, index[x].top());
				
			}
		}
		cout << prefix[answer] << endl;
	}
}

