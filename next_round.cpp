#include <iostream>
#include <vector>
using namespace std;
int main() {
    int k{} ;
    int n{} ;
    int score{} ;
    int pass_score{} ;
    vector<int> scores{};
    int counter {} ;
    cin >> n >> k ;
    for ( int i{1} ; i <= n ; i++ ) {
        cin >> score ;
        scores.push_back(score);
    }
    pass_score = scores[k-1] ;

    for (auto c : scores){
        if (c >= pass_score && c > 0){
            counter++ ;
        }
    }
    cout << counter ;
    return 0 ;
}
