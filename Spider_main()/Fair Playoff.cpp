// Author : Abdelrhman
// Link : https://codeforces.com/problemset/problem/1535/A

#include <iostream>

using namespace std;

int main()
{
    int t, first, second, third, fourth;
    cin >> t;
    for(int i = 0 ; i < t ; i ++)
    {
        cin >> first >> second >> third >> fourth;
        if ( first < second ) //second
        {
            if ( third < fourth )
            {
                if ( second > third && first < fourth)
                    cout << "YES" << endl;
                else
                    cout << "NO"  << endl;
            }
            else if ( third > fourth )
            {
                if ( second > fourth && first < third)
                    cout << "YES"  << endl;
                else
                    cout << "NO" << endl;
            }

        }
        else if ( first > second)
        {
            if ( third < fourth )
            {
                if ( first > third && second < fourth )
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else if ( third > fourth )
            {
                if ( first > fourth && second < third )
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }

    }
    return 0;
}

