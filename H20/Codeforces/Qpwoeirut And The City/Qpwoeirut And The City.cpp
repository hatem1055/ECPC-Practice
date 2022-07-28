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
        priority_queue<long long , vector<long long >, greater<long long > >yarab;
        long long  n;
        cin >> n;
        vector<long long >h(n + 1);
        vector<long long > result(n + 1);
        for (int i = 1; i < n + 1; i++)
            cin >> h[i];

        for (int i = 2; i < n; i++)
        {
            int x = h[i] - max(h[i - 1], h[i + 1]);
            if (x > 0)
                result[i] = 0;
            else if (x == 0)
                result[i] =  1;
            else
                result[i] = abs(x) + 1;
        }
       /* cout << " result will be \n";
        cout << " ";
        for (int i = 2; i < result.size() ; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;*/

        long long answer = 0;
        for (int i = 2; i < n; i+=2)
            answer += result[i];
        yarab.push(answer);
        long long  total = answer;

        if (n % 2 == 0)
        {
            for (int i = n-1 ; i > 1; i -= 2) {
                total -= result[i - 1];
                total += result[i];
                yarab.push(total);
            }
            cout << yarab.top() << endl;
        }
        else
            cout << yarab.top() << endl;

    }

    return 0;
}