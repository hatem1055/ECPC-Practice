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
		vector<string>word;
		map<string, bool> yarab;

		for (int i = 0; i < n; i++)
		{
			string str;
			cin >> str;
			word.push_back(str);
			yarab[str] = 1;
		}
		for (int i = 0; i < n; i++)
		{
			bool one = false;
			for (int j = 1; j < word[i].size(); j++)
			{
				int len = word[i].size();
				string first, second;
				first = word[i].substr(0, j);
				second = word[i].substr(j, len - 1);
				if (yarab[first] && yarab[second])
				{
					one = true;
					break;
				}
			}
			if (one)
			{
				cout << 1;
			}
			else
			{
				cout << 0;
			}

		}
		cout << endl;
	}


}
