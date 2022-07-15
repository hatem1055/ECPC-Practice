//https://codeforces.com/contest/701/problem/C
#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(int i = 0 ; i < n ;i++)
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
 
int len, q;
string s;
 
int main()
{
    kareemS
    cin >> len >> s;
    map<char,int> freq1;
    for(char c :s){
        freq1[c]++;
    }
    int left=0,right=1;
    int ans =len,types=freq1.size();
    map<char,int> freq,temp;
    freq[s[0]]=1;
    temp[s[0]]++;
    while(left<right&&right<len&&left<len){
        temp[s[right]]++;
        while(s[right]==s[left]&&left!=right) {
            while (temp[s[left]] > 1) {
                temp[s[left]]--;
                left++;
            }
        }
        freq[s[right]]=1;
        if(freq.size()==types) { ans = min(ans, right - left + 1); }
        right++;
    }
    cout << ans << endl;
    return 0;
 
}