#include <iostream>
#include <deque>

using namespace std;

int main(){
    int n, c = 0;
    string str;
    cin >> n;
    cin >> str;
    deque<char> mainDeck;
    for(int i = 0; i < n; i++){
        mainDeck.push_back(str[i]);
    }
    int i = 0;
    while(i < mainDeck.size() - 1){
        if(mainDeck[i] == mainDeck[i+1]){
            mainDeck.erase(mainDeck.begin() + i);
            c++;
        }
        else{
            i++;
        }
    }
    cout << c;
    return 0;
}