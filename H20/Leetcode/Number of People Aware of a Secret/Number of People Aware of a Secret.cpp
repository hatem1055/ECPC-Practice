class Solution {
public:
	int MOD = 1e9 + 7;
	int peopleAwareOfSecret(int n, int delay, int forget) {

		vector<long long> DP(n + 1, 0);
		DP[1] = 1;


		for (int i = 1; i <= n; i++)
		{
			if (DP[i] == 0)
			{
				continue;
			}
			for (int j = i + 1; j <= n; j++)
			{
				if (forget + i == j)// Here the ith person will forget that secret
				{
					DP[i] = 0;
					break;
				}
				if (delay + i <= j)// Here the ith person can share that secret
				{
					DP[j] += (DP[i] % MOD);
				}
			}

		}
		long long  sum = 0;
		for (int i = 0; i < size(DP); i++)
			sum += DP[i];
		return sum % MOD;
	}
};