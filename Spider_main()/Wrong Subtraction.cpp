// Abdelrhman
// Link : https://codeforces.com/contest/1143/problem/B

#include <bits/stdc++.h>

using namespace std;
void sub(int n, int x)
{
    int counter = 0 ;
    string str = to_string(n);
    while (x != 0)
    {
        if (str[str.length()-1] == '0')
        {
               counter += 1;
        }
        if(counter == 0)
        {
            return sub(n-1,x-1);
        }
        else
        {
            string str1;
            for(int i = 0 ; i < str.length()-1 ; i++)
                {
                    str1 += str[i];
                }
            n = stoi(str1);
           return sub(n,x-1);

        }
    }
    cout <<  n;
}

int main()
{
    int n,x;
    cin >> n >> x;
    sub(n,x);
}
