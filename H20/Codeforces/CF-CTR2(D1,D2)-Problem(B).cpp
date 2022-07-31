#include <bits/stdc++.h>
#define DedSec ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    DedSec
    int t;
    cin>>t;
    while (t--){
        int n,x;
        cin>>n>>x;
        vector<int>piles(n);
        for(int i=0;i<n;i++){
            cin>>piles[i];
        }
        bool guided = false;
        long long counter = 0;
        long long guideLow{},guideHigh{};
        long long testLow{},testHigh{};
        for(int num : piles){
            if(!guided){
                guideLow = num - x;
                guideHigh = num + x;
                guided = true;
            }else{
                testLow = num - x;
                testHigh = num + x;
                guideLow = max(testLow,guideLow);
                guideHigh = min(testHigh,guideHigh);
                if(testHigh<guideLow||testLow>guideHigh){
                   counter++;
                   guideLow = testLow;
                   guideHigh = testHigh;
                }
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
