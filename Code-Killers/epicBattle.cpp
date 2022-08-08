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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    files();
    int n;
    cin >> n;
    vector<int> arr (n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum+= arr[i];
    }
    sum-= n;
    if(sum%2==0){
        cout << "Mike";
    }
    else{
        cout << "Constantine";
    }
    return 0;
}