#include <iostream>
#include<cmath>
#include <algorithm>
#include<set>
#include<vector>
#include<string>
#include <string.h>
#include<map>
using namespace std;





int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, H, M;
        cin >> n >> H >> M;

        map<int, int>yarab;
        for (int i = 0; i < n; i++)
        {
            int h, m;
            cin >> h >> m;
            yarab[h * 60 + m]++;
        }

        int time = H * 60 + M;
        int te = 0;
        while (!yarab[(time + te) % (24 * 60)])
        {
            te++;
        }
        cout << te / 60 << " " << te % 60 << endl;

    }
}



