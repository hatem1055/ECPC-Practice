/*

   _____                     ______        _____
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


int main()
{
	int n;
	cin >> n;
	string str;
	cin >> str;
	if (n % 2 == 0)
	{
		for (int i = n - 2; i >= 0; i -= 2)
		{
			cout << str[i];
		}
		for (int i = 1; i < n; i += 2)
		{
			cout << str[i];
		}
		cout << endl;
	}
	else
	{
		for (int i = n - 2; i > 0; i -= 2)
		{
			cout << str[i];
		}
		cout << str[0];
		for (int i = 2; i < n; i += 2)
		{
			cout << str[i];
		}
		cout << endl;
	}

}
