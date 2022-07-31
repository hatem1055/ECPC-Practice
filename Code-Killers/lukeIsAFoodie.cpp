#include <iostream>
#include <bits/stdc++.h>    
#include <math.h>
#include <algorithm>

using namespace std;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long n, x, sum = -1;
        cin >> n >> x;
        long long arr[n];
        for(long long i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(long long i = 0; i < n; i){
            long long min = LONG_LONG_MAX, max = 0;
            bool first = true;
            while(max - min <= 2*x || first){
                first = false;
                if(arr[i] > max){
                    max = arr[i];
                }
                if(arr[i] < min){
                    min = arr[i];
                }
                if(max - min <= 2*x){
                    i++;
                }
                else{
                    break;
                }
            }
            sum++;
        }
        cout << sum << endl;
    }
    return 0;
}