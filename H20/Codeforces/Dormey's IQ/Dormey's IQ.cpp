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

int main() {


    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int>A(n);
        vector<int>final(n, 0);
        for (int i = 0; i < n; i++)
            cin >> A[i];
        int qi = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (A[i] <= qi)
                final[i] = 1;

            else if (qi < q)
            {
                qi++;
                final[i] = 1;
            }
        }


        for (int i = 0; i < n; i++)
        {
            cout << final[i];
        }
        cout << endl;
    }

    return 0;
}