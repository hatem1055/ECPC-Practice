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


void print(string str)
{
	cout << str << endl;
}
int main() {

	int t ; cin >> t;
	while (t--)
	{
		int n, m, k;
		cin >> n >> m >> k;
		long long columnsCanBeFilled = 0, rowsCanBeFilled = 0, IsThereOddColumns = 0, IsThereOddRows = 0, 
			IsThereColGreater2 = 0 , IsThereRowGreater2 = 0;
		vector<long long >pigments(k);
		for (int i = 0; i < k; i++)
			cin >> pigments[i];
		
		for (int i = 0; i < k; i++)
		{
			long long c = pigments[i] / n;
			long long r = pigments[i] / m;
			if (r > 1)
			{
				rowsCanBeFilled += r;
				if (r>=3)
					IsThereRowGreater2 = 1;
				if (r & 1 )
					IsThereOddRows= 1;
			}
			if (c > 1)
			{
				columnsCanBeFilled += c;
				if (c >= 3)
					IsThereColGreater2 = 1;
				if (c & 1)
					IsThereOddColumns= 1;
			}
		}
		if (columnsCanBeFilled >= m)
		{
			if (!(m&1))
			{
				print("YES"); continue;
			}
			else if (IsThereOddColumns)
			{
				print("YES"); continue;
			}
			else
			{
				if (IsThereColGreater2)
				{
					columnsCanBeFilled--;
					if (columnsCanBeFilled >= m)
					{
						print("YES"); continue;
					}
				}
			}
		}


		if (rowsCanBeFilled >= n)
		{
			if (!( n & 1))
			{
				print("YES"); continue;
			}
			else if (IsThereOddRows)
			{
				print("YES"); continue;
			}
			else
			{
				if (IsThereRowGreater2)
				{
					rowsCanBeFilled--;
					if (rowsCanBeFilled >= n)
					{
						print("YES"); continue;
					}
				}
			}
		}
		print("NO");
	}

	return 0;
}
