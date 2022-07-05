#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int>minis;
        int row, len;
        cin>>row;
        cin>>len;
        string tot[row];
        for(int i=0;i<row;i++){
            cin>>tot[i];
        }
        for(int i = 0; i < row; i++){
            for(int j = i + 1; j < row; j++){
                int sumForWrd = 0;
                for(int k = 0; k < len; k++){
                    sumForWrd+= abs(tot[i][k] - tot[j][k]);
                }
                minis.push_back(sumForWrd);
            }
        }
        int min = *min_element(minis.begin(), minis.end());
        cout << min << endl;
    }
}