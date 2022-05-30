#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int t{0};
    int temp{0};
    cin>>t;
    int aC,bC;
    vector<int>alice_cards{};
    vector<int>bob_cards{};
    while (t--){
        alice_cards.clear();
        bob_cards.clear();
        cin>>aC;
        while (aC--){cin>>temp; alice_cards.push_back(temp);}
        cin>>bC;
        while (bC--){cin>>temp; bob_cards.push_back(temp);}
        sort(alice_cards.begin(),alice_cards.end(),greater<>());
        sort(bob_cards.begin(),bob_cards.end(),greater<>());
        if(alice_cards[0]>bob_cards[0]){
            cout<<"Alice"<<endl;
            cout<<"Alice"<<endl;
        }else if(alice_cards[0]==bob_cards[0]){
            cout<<"Alice"<<endl;
            cout<<"Bob"<<endl;
        }else{
            cout<<"Bob"<<endl;
            cout<<"Bob"<<endl;
        }
 
    }
 
    return 0;
}
