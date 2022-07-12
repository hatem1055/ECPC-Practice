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


int yarab[200010], dp[200010];

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		long long ans = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> yarab[i];
			dp[i] = dp[i - 1];
			if (yarab[i] < i)
			{
				dp[i]++;
				ans += dp[yarab[i] - 1];
			}
		}
		cout << ans << endl;
	}
	return 0;
}
