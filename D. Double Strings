#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(int i = 0 ; i < n ;i++)
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
 
 
int main()
{
    kareemS
    int t;
    cin >> t;
    while(t--) {
        int n ;
        cin >> n;
        string s[n];
        map<string,int> freq;
        fr(n){
            cin >> s[i];
            freq[s[i]]++;
        }
        fr(n){
            bool flag = false;
            string temp = "";
            for(int j=0;j<s[i].length()-1;j++){
                temp += s[i][j];
                if(freq[temp]>0){
                    string temp2 = s[i].substr(j+1,s[i].length()-j);
                    if(freq[temp2]>0){
                        flag = true;
                    }
                }
            }
            if(flag)cout << 1;
            else cout << 0;
        }
        cout << "\n";
    }
    return 0;
 
}
