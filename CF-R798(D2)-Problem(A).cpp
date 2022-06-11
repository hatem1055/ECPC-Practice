#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t{0};
    cin>>t;
    int n{0},m{0},k{0};
    string a{};
    string b{};
    while (t--){
        vector<pair<int,char>>aSorted{};
        vector<pair<int,char>>bSorted{};
        cin>>n>>m>>k;
        cin>>a;
        cin>>b;
        pair<int,char>test{};
        for(int i=0;i<n;i++){
            test.first = int(a[i]);
            test.second = a[i];
            aSorted.push_back(test);
        }
        for(int i=0;i<m;i++){
            test.first = int(b[i]);
            test.second = b[i];
            bSorted.push_back(test);
        }
        sort(aSorted.begin(),aSorted.end());
        sort(bSorted.begin(),bSorted.end());
        int counter =0;
        bool aUsed = false;
        bool bUsed = false;
        string result = "";
        while (!aSorted.empty() && !bSorted.empty()){
            if(aSorted[0].first<=bSorted[0].first){
                if(aUsed){
                    if(counter<k){
                        result.push_back(aSorted[0].second);
                        aSorted.erase(aSorted.begin());
                        counter++;
                    }else{
                        result.push_back(bSorted[0].second);
                        bSorted.erase(bSorted.begin());
                        aUsed = false;
                        bUsed = true;
                        counter =1;
                    }
                }else{
                    aUsed = true;
                    bUsed = false;
                    counter=1;
                    result.push_back(aSorted[0].second);
                    aSorted.erase(aSorted.begin());
                }
            }else{
                if(bUsed){
                    if(counter<k){
                        result.push_back(bSorted[0].second);
                        bSorted.erase(bSorted.begin());
                        counter++;
                    }else{
                        result.push_back(aSorted[0].second);
                        aSorted.erase(aSorted.begin());
                        aUsed = true;
                        bUsed = false;
                        counter=1;
                    }
                }else{
                    bUsed = true;
                    aUsed = false;
                    counter = 1;
                    result.push_back(bSorted[0].second);
                    bSorted.erase(bSorted.begin());
                }
            }
        }
        cout<<result<<endl;
 
    }
    return 0;
}
