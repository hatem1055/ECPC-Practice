/*
    This Code Made by: Mahmoud M Aziz
    Date: 5/7/20222
*/
#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        long long n, c = 0, digit = 0;
        vector<double> v;
        cin >> n;
        while(n != 0)
        {
            double tmp = (double(n)/10 - n/10)*pow(10,c+1);
            if(tmp != 0)
            {
                v.push_back(tmp);
                digit++;
            }
            n /= 10;
            c++;
        }
        cout << digit << endl;
        for(int i = 0; i < digit; i++) cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}
