#include <bits/stdc++.h>
using namespace std;


int main() {
    int n{0};
    cin>>n;
    pair<int,int>EP;
    vector<pair<int,int>>odds{};
    vector<pair<int,int>>evens{};
    int temp{0},counter{1};
    while (n--){
        cin>>temp;
        EP.first = temp;
        EP.second = counter;
        if(temp%2==0){
            evens.push_back(EP);
        }else{
            odds.push_back(EP);
        }
        counter++;
    }
    if(evens.size()==1){
        cout<<evens[0].second<<endl;
    }else{
        cout<<odds[0].second<<endl;
    }

    return 0;
}
