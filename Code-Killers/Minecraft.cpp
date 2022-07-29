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
    vector<long long >inc(n + 1);
    vector<long long >dec(n + 1);


    for (int i = 1; i <= n; i++)
         cin >> Height[i];

    long long sum = 0;
    inc[1]=0;
    for (int i = 1; i < n; i++)
    {
        if (Height[i]  > Height[i + 1])
        {
            sum += Height[i] - Height[i + 1];
            inc[i + 1] = sum;
        }
        else
        {
            inc[i + 1] = sum;
        }
    }

    long long sum2 = 0;
    dec[n]=0;
    for (int i = n; i > 1; i--)
    {
        if (Height[i]  > Height[i - 1])
        {
            sum2 += Height[i] - Height[i - 1];
            dec[i - 1] = sum2;
        }
        else
        {
            dec[i - 1] = sum2;
        }
    }
    while (m--)
    {
        int s, t;
        cin >> s >> t;
        if (s > t)
        {
            cout << dec[t] -dec[s] << endl;
        }
        else
           cout << inc[t] - inc[s] << endl;
    }

}