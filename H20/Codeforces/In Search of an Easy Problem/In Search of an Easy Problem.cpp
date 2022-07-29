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
void print(string world)
{
    cout << world << endl;
}
int main()
{
    int n;
    cin >> n;
    bool HARD = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            HARD = true;
        }
    }
    HARD ? print("HARD") : print("EASY");
}