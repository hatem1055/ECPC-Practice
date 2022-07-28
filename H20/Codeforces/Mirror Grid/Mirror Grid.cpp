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


void solve()
{
	int n;
	cin >> n;
	vector<vector<int >> board(n , vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			char x;
			cin >> x;
			board[i][j] = x ;
		}
	}
	long long sum=0  ;
	for (int i = 0; i < (n+1) / 2 ; i++)
	{
		for (int j = 0; j < n/2 ; j++)
		{
			int ones = 0, zeros = 0;
			//cout << i << " " << j << endl;
			if (board[i][j] == '1')
				ones++;
			else
				zeros++;
			int index1 = j;
			int index2 = n - 1 - i;
			//cout << index1 << " " << index2 << endl;

			if (board[index1][index2] == '1')
				ones++;
			else
				zeros++;
			index1 = n - 1 - j;
			index2 = i;
			//cout << index1 << " " << index2 << endl;
			if (board[index1][index2] == '1')
				ones++;
			else
				zeros++;
			index1 = n - 1 - i;
				index2 = n- 1 - j;
			//cout << index1 << " " << index2 << endl;
			if (board[index1][index2] == '1')
				ones++;
			else
				zeros++;
			
			sum += min(zeros, ones);
		}
		
	}
	cout << sum << endl;
}

int main() {

	int t; cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}
