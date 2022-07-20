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
void print(int num)
{
    cout << num << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>> n  ;
        vector<int>v(n);
        int even = 0;
        int odd = 0;

        for (int i = 0; i <n ; i++)
        {
            cin >> v[i];
            if (v[i] % 2 ==0)
                even++;
            else
                odd++;
        }
        even > odd ? print(odd) : print(even);
    }

    return 0;
}