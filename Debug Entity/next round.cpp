#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k, c, score, participant = 0;
    vector<int> vec;
    cin >> n >> k;
    if (n < 1 || k > n || n > 50){
        cin >> n >> k;
    }
    for (int i = 0; i < n; i++){
        cin >> score;
        vec.push_back(score);
    }
    for (int i = 0; i < vec.size(); i++){
        if (i + 1 == k){
            c = vec[i];
        }
    }
    for (int m : vec){
        if (m >= c && m != 0){
            participant++;
        }
    }
    cout << participant;
}