#include <iostream>
using namespace std;

int main() {
    int n, player1 = 0, player2 = 0, turn = 0;
    cin >> n;
    while(n > 1000 || n < 1){
        cin >> n;
    }
    int cards[n-1];
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }
    int start = 0, end = n-1;
    for (int i = 0; i < n; ++i) {
        if(cards[start] >= cards[end]){
            if(turn % 2 == 0){
                player2 += cards[start];
            } else {
                player1 += cards[start];
            }
            start++;
        } else {
            if(turn % 2 == 0){
                player2 += cards[end];
            } else {
                player1 += cards[end];
            }
            end--;
        }
        turn++;
    }
    cout << player2 << " " << player1;
}
