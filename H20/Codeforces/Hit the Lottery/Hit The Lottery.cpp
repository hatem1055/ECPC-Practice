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
	int bills = 0;
	while (n)
	{
		if (n >= 100)
		{
			n -= 100;
			bills++;
		}
		else if (n >= 20)
		{
			n -= 20;
			bills++;
		}
		else if (n >= 10)
		{
			n -= 10;
			bills++;
		}
		else if (n >= 5)
		{
			n -= 5;
			bills++;
		}
		else
		{
			n--;
			bills++;
		}

	}
	cout << bills << endl;

}