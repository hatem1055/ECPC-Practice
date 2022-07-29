#include <iostream>
using namespace std;
int main() {
    int n,k,l,c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k>>l;
        if(k<(l-1)){
            c++;
        }
    }
    cout<<c;
    return 0;
}
