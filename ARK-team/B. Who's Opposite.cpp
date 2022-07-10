//https://codeforces.com/problemset/problem/1560/B
//created by : Rana Essam
//last edit : 8/7/2022
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long c;
    cin >> c ;
    while (c--)
    {
        long long arr[3], diff , max, x;
        int ans=0 ;
        for(int i = 0 ; i < 3 ; i++)
        {
            cin >> arr[i];
        }
        diff = abs(arr[0]- arr[1]);
        max = diff*2 ;
        x = *max_element(arr , arr+3);
        if (x > max)
        {
            ans = -1 ;
        }
        if(ans == 0)
        {
            long long ans2 ;
            ans = arr[2] + diff ;
            ans2 = arr[2] - diff ;
            if(!(ans > 0 && ans <= max))
            {
                ans = ans2;      
            }
           
        }
        cout << ans << endl;

    }
}