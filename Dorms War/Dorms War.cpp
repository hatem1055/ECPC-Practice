#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;




int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string password;
		int n;
		int k; 
		cin >> password;
		cin >> k;
		vector<char> special;
		for (int i = 0; i < k; i++)
		{
			char spec;

			cin >> spec;
			
			special.push_back(spec);
			
		}
		bool error = false;
		int counter = 00;
		string intital_pswd = password;
		while (error == false)
		{
			bool no_more_deletion = true;
			for (int i = 0; i < n; i++)
			{
				if (find(special.begin(), special.end(), password[i]) != special.end())
				{
					if (i == 0)
					{
						continue;
					}
					
					no_more_deletion = false;
					password.erase(i-1, 1);
					n--;
					i--;
				}
				
			}
			if (no_more_deletion == false)
			{
				counter++;
			}
			if ( no_more_deletion == true)
			{
				error = true;
				if (intital_pswd == password)
				{
					counter = 0;
				}
			}
			
			
		}
		//cout << password << endl;
		cout << counter << endl;

		


	}
	
}