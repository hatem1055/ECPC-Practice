#include<iostream>
using namespace std;

int main() {
    string players;
    int k=0;
    cin >> players;
    for(int i=0; i<players.size();i++){
        int n =0,m=0;
        for(int j=i;j<i+7;j++){
            if(players[j]=='0'){
                n++;
            }
        }
        for(int j=i;j<i+7;j++){
            if(players[j]=='1'){
                m++;
            }
        }
        if(n==7|| m==7){
            cout<<"YES";
            k++;
            break;
        }
    }
    if(k==0){
        cout<<"NO";
    }
}