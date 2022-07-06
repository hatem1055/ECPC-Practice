// Abdelrhman
// link : https://codeforces.com/contest/791/problem/A

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int limak , bob;
    cin >> limak  >> bob;
    if ( limak <= 10 && limak >= 1 && bob <= 10 && bob >= 1  )
    {
        for(int i=0 ; ;)
        {
            if (limak <= bob)
            {
                limak *= 3 ;
                bob *= 2;
                i++;
            }
            else
            {
                cout << i;
                break;
            }

        }
    }

}
