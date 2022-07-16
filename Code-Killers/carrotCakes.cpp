#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, k, t, d;
    cin >> n;
    cin >> t;
    cin >> k;
    cin >> d;
    if(t > d && k < n){
        cout << "YES";
    }
    else if(t > d && k >= n){
        cout << "NO";
    }
    // else if(t == d){
    //     if(k <= 2*n){
    //         cout << "NO";
    //     }
    //     else{
    //         cout << "YES";
    //     }
    // }
    else{
        int sum = 0, i = 0;
        // int without = ceil(n / k) * t;
        while(sum < n){
            i++;
            if(i % t == 0){
                sum+= k;
            }
        }
        int without = i;
        i = 0, sum = 0;
        while(sum < n){
            i++;
            if(i % t == 0){
                sum+= k;
            }
            if(i > d && (i - d) % t == 0){
                sum+= k;
            }
        }
        if(i < without){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    return 0;
}