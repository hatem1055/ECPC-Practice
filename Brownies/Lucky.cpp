// Problem link: https://codeforces.com/contest/1676/problem/A
// Author: Nada Mohammed
#include <iostream>
using namespace std;

int main() {
    int t;
    string number, lucky;
    cin >> t;
    while (t--) {
        int sum1 = 0, sum2 = 0;
        lucky = "NO";
        cin >> number;
        for (int i = 0; i < 3; i++)
            sum1 += number[i] - '0';  // convert character to integer & add it to the sum variable
        for (int i = 3; i < 6; i++)
            sum2 += number[i] - '0';  // convert character to integer & add it to the sum variable
        if (sum1 == sum2)
            lucky = "YES";
        cout << lucky << endl;
    }
}