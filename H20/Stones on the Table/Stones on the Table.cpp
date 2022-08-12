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
	int n;
	cin >> n;
	vector<char>yarab;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		char x;
		cin >> x;
		yarab.push_back(x);
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (yarab[i] == yarab[i+1])
		{
			count++;
		}
	}
	cout << count << endl;


}
