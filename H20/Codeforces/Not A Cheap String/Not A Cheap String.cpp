#include <iostream>
#include <vector>
#include <string>
#include <map>
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
		map<int, vector<int>> yarab;
		string str;
		int p ;
		cin >> str >> p;
		int actual_price = 0;

		for (int i = 0; i < str.length(); i++)
		{
			yarab[int(str[i] - 96)].push_back(i);
			actual_price += int(str[i] - 96);
		}
		map<int, vector<int>>::reverse_iterator it;
		
		int remaining = actual_price - p; 
		if (remaining <= 0)
		{
			cout << str << endl;
			continue;
		}
		else
		{
			auto it = yarab.rbegin();
			while (1)
			{
				if (remaining == 1 && str[str.length() - 1]=='a')
				{
					str[str.length() - 1] = '.';
					break;
				}
				if (p >= actual_price)
				{
					break;
				}
				if (it->second.size() != 0)
				{
					actual_price -= it->first;
					str[(it->second[it->second.size() - 1])] = '.';
					it->second.pop_back();
					if (it->second.size() == 0)
					{

						++it;
						if (it == yarab.rend())
						{
							break;
						}
					}
				}

			}
			
			string final;
			for (int i = 0; i < str.length(); i++)
			{
				if (str[i] != '.')
				{
					final += str[i];
				}
			}
			cout << final << endl;

		}

	}
	
}



		