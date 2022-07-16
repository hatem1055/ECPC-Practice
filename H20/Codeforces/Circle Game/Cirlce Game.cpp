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
		vector<int> piles(n + 1);
		piles[0] = INT_MAX;
		for (int i = 1; i < n + 1; i++)
		{
			cin >> piles[i];
		}
		if (n % 2 != 0)
		{
			cout << "Mike" << endl;
			continue;
		}
		auto it = min_element(piles.begin(), piles.end());
		int index = it - piles.begin();
		
		if (index % 2 == 0 )
		{
			cout << "Mike" << endl;

		}
		else
		{
			cout << "Joe" << endl;
		}
	}
	
}
