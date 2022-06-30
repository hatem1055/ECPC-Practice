#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int nbox,turns;
    cin>>turns;
    while(turns--) {
        cin >> nbox;
        int totaleated_candies=0;
        int nofcandies[nbox], eatencandies[nbox];
        for (int i = 0; i < nbox; i++) {
            cin >> nofcandies[i];
        }
        sort(nofcandies, nofcandies + nbox);
        for (int j = 0; j < nbox; j++) {
            eatencandies[j] = nofcandies[j] - nofcandies[0];
        }
        for (int c = 0; c < nbox; c++) {
            totaleated_candies += eatencandies[c];
        }

        cout << totaleated_candies<<endl;
    }
}
