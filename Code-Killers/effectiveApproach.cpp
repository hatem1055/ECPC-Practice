#include <iostream>
#include <bits/stdc++.h>    
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

vector<pair<int, int>> arr;

int binarySearch(int x, int start, int end){
    if(start > end){
        return -1;
    }
    else{
        int index = (start+end)/2;
        if(arr[index].first < x){
            return binarySearch(x, index+1, end);
        }
        else if(arr[index].first > x){
            return binarySearch(x, start, index-1);
        }
        else{
            return arr[index].second;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    long long vasya = 0, petya = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(make_pair(x, i+1));
    }
    sort(arr.begin(), arr.end());
    int m;
    cin >> m ;
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        int index = binarySearch(x, 0, n);
        vasya+= index;
        petya+= n-index+1;
    }
    cout << vasya << ' ' << petya;
    return 0;
}