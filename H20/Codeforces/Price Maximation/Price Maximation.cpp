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
		int n, k;
		cin >> n >> k;
		vector<int> yarab(n);
		long long burels = 0;
		vector<int> remainder;
		for (int i = 0; i < n; i++)
		{
			cin >> yarab[i];
			burels += yarab[i] / k;
			remainder.push_back(yarab[i] % k);
		}
		sort(remainder.rbegin(), remainder.rend());
		int j = n - 1;
		for (int i = 0; i < j  ; i++ )
		{
			while (remainder[i] + remainder[j] < k && j > i )
				j--;
			if (j == i )
				break;
			burels++; j--;
		}
		cout << burels << endl;
	
	
	}

}
