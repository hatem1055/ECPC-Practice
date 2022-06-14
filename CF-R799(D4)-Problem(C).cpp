#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t{0};
    cin>>t;
    for(int k=0;k<t;k++){
        bool finished = false;
        for(int i=0;i<8;i++) {
            string row{};
            cin>>row;
            int index1{-1}, index2{-1};
            bool foundfirst = false;
            bool foundSecond = false;
            for (int j = 0; j < row.size(); j++) {
                if (row[j] == '#' && !finished){
                    if (!foundfirst) {
                        foundfirst = true;
                        index1 = j;
                    } else {
                        foundSecond = true;
                        index2 = j;
                        finished = true;
                        break;
                    }
                }
            }
            if (foundfirst && foundSecond) {
                if (index2 == index1 + 2) {
                    cout << i + 2 << " " << index1 + 2 << endl;
                    foundfirst = false;
                    foundSecond = false;
                }else{
                    finished = false;
                }
            }
        }
    }
 
    return 0;
}
