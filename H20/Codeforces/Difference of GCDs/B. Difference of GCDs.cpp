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
    while (t--) {
        long long  l, n, r;
        cin >> n >> l >> r;
        vector<long long > numbers;
        for (int i = 1; i <= n; i++) {
            int k = (r / i) * i;
            if (k >= l)
            {
                numbers.push_back(k);
            }
        }
        if (size(numbers) == n)
        {
            cout << "YES" << endl;
            for (int i = 0; i < size(numbers); i++)
            {
                cout << numbers[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}