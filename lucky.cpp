// created by shahd moamen
// link : https://codeforces.com/contest/1676/problem/A
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    string s;
    cin>>t;
    string final;
    for (int i = 0 ; i<t ; i++){
        cin >> s;
        int arr[6];
        for ( int i = 0; i<6;i++){
            string substring = s.substr(i , 1);
            int x = stoi(substring);
            arr[i]= x;
        }
        int sum1= arr[0]+arr[1]+arr[2];
        int sum2= arr[3]+arr[4]+arr[5];
        if (sum1==sum2){
            final+='y';
        }
        else{
            final+='n';

        }

    }
    for (int i = 0; i < t; i++) {
        if (final[i] == 'y') {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;

        }
    }
    return 0;
}
