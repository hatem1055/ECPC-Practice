//https://codeforces.com/contest/1607/problem/A

#include <iostream>
#include <bits/stdc++.h>
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
    cin >>t;
    while(t--){
        string keyboard , word;
        cin >> keyboard >> word;
        map<char , int > ins;
        fr(keyboard.length()){
            ins[keyboard[i]]=i+1;
        }
        int time = 0;
        fr(word.length()-1){
            time += abs(ins[word[i]]-ins[word[i+1]]);
        }
        cout << time << "\n";
    }
    return 0;
 
}
