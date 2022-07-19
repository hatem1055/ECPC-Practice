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
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        map<int, vector<int>>yarab;
        vector<int>colors(n + 1);
        vector<int>answer(n + 1, 0);
        for (int i = 1; i < n + 1; i++)
        {
            cin >> colors[i];
            yarab[colors[i]].push_back(i);

        }
        for (const auto& pair : yarab)
        {
            answer[pair.first]++;
            for (int i = 0; i < pair.second.size() - 1; i++)
            {
                int x = (pair.second[i + 1] - pair.second[i]) - 1;
                if (x % 2 == 0)
                {
                    answer[pair.first]++;
                }
            }

        }
        for (int i = 1; i < n + 1; i++)
        {
            cout << answer[i] << " ";
        }
        cout << endl;


    }

    return 0;
}