#include <iostream>
using namespace std;

int main() {
    int T, N, count;
    string upper, lower, centre;
    cin >> T;
    while(T--) {
        int max = 0;
        cin >> N;
        char array[3][N * 3];
        cin >> upper >> centre >> lower;
        for (int i = 0; i < N * 3; ++i) {
            array[0][i] = upper[i];
            array[1][i] = centre[i];
            array[2][i] = lower[i];
        }
        int start = 0, end = 3;
        while (N--) {
            count = 0;
            for (int i = 0; i < 3; ++i) {
                for (int j = start; j < end; ++j) {
                    if (array[i][j] == '*') {
                        count += 4;
                    }
                }
            }
            start += 3;
            end += 3;
            if(count > max){
                max = count;
            }
        }
        cout << max << "\n";
    }
}
