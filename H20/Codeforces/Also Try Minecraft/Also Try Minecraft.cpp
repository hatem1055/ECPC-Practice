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

    int n, m;
    cin >> n >> m;
    vector<int>Height(n + 1);
    vector<long long >LeftToRight(n + 1);
    vector<long long >RightToleft(n + 1);


    for (int i = 1; i <= n; i++)
    {
        cin >> Height[i];
    }
    long long sum = 0;
    for (int i = 1; i < n; i++)
    {

        if (Height[i] - Height[i + 1] > 0)
        {
            sum += Height[i] - Height[i + 1];
            LeftToRight[i + 1] = sum;
        }
        else
        {
            LeftToRight[i + 1] = sum;
        }
    }

    long long sum2 = 0;
    for (int i = n; i > 1; i--)
    {
        if (Height[i] - Height[i - 1] > 0)
        {
            sum2 += Height[i] - Height[i - 1];
            RightToleft[i - 1] = sum2;
        }
        else
        {
            RightToleft[i - 1] = sum2;
        }
    }
    reverse(RightToleft.begin(), RightToleft.end());

    long long damage = 0;

    while (m--)
    {
        int x, y;
        cin >> x >> y;
        if (x > y) // 7 1
        {
            x = n - x;
            y = n - y;
            cout << RightToleft[y] - RightToleft[x] << endl;
        }
        else // 1 7
        {
            cout << LeftToRight[y] - LeftToRight[x] << endl;
        }

    }

    return 0;
}