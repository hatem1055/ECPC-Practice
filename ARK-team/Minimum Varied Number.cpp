#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s ="";
        map<int,int> freq;
        while(n>0){
            for(int i = 9 ; i>0 ; i--){
                if(n>=i && freq[i] == 0) {
                    freq[i]++;
                    s = to_string(i) +s;
                    n-=i;
                    break;
                }
            }
        }

        cout << s << endl;
    }
    return 0;

}
