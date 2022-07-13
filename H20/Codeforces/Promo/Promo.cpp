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
	int n, q;
	cin >> n >> q;
	vector<long long >prices(n+ 1);
	for (int i = 1; i < n + 1; i++)
	{
		cin >> prices[i];
	}
	sort(prices.begin(), prices.end());

	// Getting the prefix sum 
	long long sum = 0 ;
	vector<long long > prefix(n + 1);
	for (int i = 1 ; i < n + 1; i++)
	{
		sum += prices[i];
		prefix[i] = sum;
		
	}
	
	while (q--)
	{
		int x, y;
		cin >> x >> y;
		if (x == 1)
		{
			cout << prices[n] << endl;
			continue;	
		}
		cout << prefix[n - x + y] - prefix[n - x] << endl;

	}

}
