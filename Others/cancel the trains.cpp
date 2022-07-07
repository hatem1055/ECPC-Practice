#include <iostream>
using namespace std;

int train(){
    int n,m;
    cin>>n>>m;
    int t1[n];
    int t2[m];

    for(int i = 0; i < n; i++){
        cin >> t1[i];
    }
    for(int i = 0; i < m; i++){
        cin>>t2[i];
    }
    int c=0;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            if (t1[i]==t2[j]){
                c++;
            }
        }

    }
    cout<<c<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        train();

    }
}