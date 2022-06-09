#include <bits/stdc++.h>
using namespace std;
 
int main() {
    bool primes[1000001];
    memset(primes,true,sizeof(primes));
    for(int i=2;i*i<1000000;i++){
        if(primes[i]){
            for(int j = i*i;j<=1000000;j+=i){
                primes[j]= false;
            }
        }
    }
    vector<long long>squares{};
    for(long long i=0;i<=1000000;i++){
        squares.push_back(i*i);
    }
    int n;
    cin>>n;
    while (n--){
        long long p{0};
        cin>>p;
        if(binary_search(squares.begin(),squares.end(),p)&&p>=4){
            if(primes[(int) sqrt(p)]){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
