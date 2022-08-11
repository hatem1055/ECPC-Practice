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
		long long a, s;
		cin >> a >> s;
		vector<int> answer;
		bool end = false;
		while (s)
		{
			int x = a % 10;
			int y = s % 10;
			int sum;
			if (x > y)
			{
				y = s % 100;
				sum = y - x;

				if (sum > 9 || y == 0 || sum < 0)
				{
					cout << -1 << endl;
					end = true;
					break;
				}
				else
				{
					answer.push_back(sum);
				}
				s /= 10;
			}
			else if (y > x)
			{
				answer.push_back(y - x);
			}
			else
			{
				answer.push_back(0);
			}
			s /= 10;
			a /= 10;
		}
		if (end == false)
		{
			if (a)
			{
				cout << -1 << endl;
			}
			else
			{
				while (answer.back() == 0)
				{
					answer.pop_back();
				}
				for (int i = answer.size() - 1; i >= 0; i--)
				{
					cout << answer[i];
				}
				cout << endl;

			}
		}


	}


}
