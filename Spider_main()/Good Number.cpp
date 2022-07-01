/*
    The Code Made by Mahmoud M.Aziz
    Date: 27/5/2022
*/

#include <bits/stdc++.h>

using std::cout;
using std::cin;
using std::endl;
using std::ios_base;
using std::string;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int n, k, counter = 0, num_good = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        counter = 0;
        cin >> s;
        sort(s.begin(), s.end());
        for(int i = 0; i < s.size(); )
        {
            if(s[i] == s[i+1] || (s[i] - '0') > k) s.replace(i, 1, "");
            else i++;
        }
        if(s.size() == k+1)
        {
            for(int j = 0; j < s.size(); j++)
            {
                if((s[j]-'0') == j)
                    counter++;
            }
            if(counter == s.size()) num_good++;
        }
    }
    cout << num_good << endl;
	return (0);
}
