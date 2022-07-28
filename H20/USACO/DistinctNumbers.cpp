#include <bits/stdc++.h>
#define DedSec ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


int main(){
    DedSec
    set<int>mySet;
    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        mySet.insert(temp);
    }
    cout<<mySet.size();
    return 0;

    return 0;
}