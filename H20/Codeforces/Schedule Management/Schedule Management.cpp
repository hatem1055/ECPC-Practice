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
        int n, m;
        cin >> n >> m;
        vector<int>tasks(m);
        vector<int>proficent_tasks_forith_worker(n + 1);
        for (int i = 0; i < m; i++)
            cin >> tasks[i];

        for (int i = 0; i < m; i++)
            proficent_tasks_forith_worker[tasks[i]]++;

        int start = 0;
        int end = 2 * m;
        while (end > start + 1)
        {
            long long mid = (end + start) / 2;
            long long tasks_Done = 0;
            for (int i = 1; i <= n; i++)
            {
                if (proficent_tasks_forith_worker[i] >= mid)
                    tasks_Done += mid;
                else
                    tasks_Done += proficent_tasks_forith_worker[i] + (mid - proficent_tasks_forith_worker[i]) / 2;
            }
            if (tasks_Done >= m)
                end = mid;
            else
                start = mid;
        }
        cout << end << endl;
    }

    return 0;
}