#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


    using namespace std;

    int main()
    {
        long long n, k;
        cin >> n >> k;
        if (k <= (n + 1) / 2)
        {
            cout << k * 2 - 1 << endl;
        }
        else
        {
            cout << (k - (n + 1) / 2) * 2 << endl;
        }

    }



























