#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;



int main(){
    int t; 
    cin >> t;
    long long answers[t];
    int c = 0;
    while(t--){
        int n; 
        cin >> n;
        long long arr[n], sum = 0;
        long long dif[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 1; i < n-1; i++){
            long long maxi = max(arr[i-1], arr[i+1]);
            if(maxi >= arr[i]){
                dif[i] = maxi - arr[i] + 1;
            }
            else{
                dif[i] = 0;
            }
        }
        for(int i = 1; i < n-1; i+=2){
            sum+=dif[i];
        }
        answers[c] = sum;
        if(n%2==1){
            c++;
            continue;
        }
        long long newSum = sum;
        for(int i = n-2; i > 1; i-=2){
            newSum = newSum - dif[i-1] + dif[i];
            sum = min(sum, newSum);
        }
        answers[c] = sum;
        c++;
    }

    for(long long i : answers){
        cout << i << endl;
    }
    return 0;
}