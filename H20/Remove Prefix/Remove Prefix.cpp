#include <iostream>
#include<cmath>
#include <algorithm>
#include<set>
#include<vector>
#include<string>
#include <string.h>
#include<map>
using namespace std;





int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        map<int, vector<int>>yarab;
        vector<int>seq(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> seq[i];
        }
        for (int i = 1; i <= n; i++)
        {
            yarab[seq[i]].push_back(i);
        }
        long long moves = 0;
        for (auto it : yarab)
        {
            if (it.second.size() > 1)
            {
                if (moves < it.second[it.second.size() - 2])
                {
                    moves = it.second[it.second.size() - 2];
                }
            }
        }
        cout << moves << endl;
    }
}



