/*

   _____                      ______        _____
  / ____|    /\        /\    |  ____ /\    |  __ \
 | |  __    /  \      /  \   | |__  /  \   | |__) |
 | | |_ |  / /\ \    / /\ \  |  __ / /\ \  |  _  /
 | |__| | / ____ \  / ____ \ | |  / ____ \ | | \ \
  \_____|/_/    \_\/_/    \_\|_| /_/    \_\|_|  \_\

*/

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


int  main()
{
	
	long long n, m, a;
	cin >> n >> m >> a;
	long long answer = 0;
	if (n >a )
	{
		if (n % a != 0 )
		{
			answer += n / a + 1;

		}
		else
		{
			answer += n / a;
		}
	}
	else
	{
		answer++;
	}
	if (m > a )
	{
		m -= a;
		if (m / a == 0 || m == a )
		{
			answer += (answer);
		}
		else
		{
			if (m % a != 0)
			{
				answer += (m / a + 1) * answer;

			}
			else
			{
				answer += (m / a) * answer;
			}
		}
	}

	cout << answer << endl;

}