#include <iostream>

using namespace std;




int main()
{
	int t; cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		int n = str.length();
		if (n % 2 != 0)
		{
			cout << "NO" << endl;
			continue;
		}
		bool ok = false;
		int x = n / 2;
		for (int i = 0; i < x; i++)
		{
			if (str[i] != str[i + x])
			{
				ok = true;
				break;
			}
		}
		if (ok)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
}



