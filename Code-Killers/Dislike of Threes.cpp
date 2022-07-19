#include <iostream>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    int k;
    while(tc--){
        cin >> k;
        int ans;
        int i=0 , c =1;
        while(i != k){
            if(c%3!=0 && c%10!=3){
                ans=c;
                c++;
            }
            else{
                c++;
                continue;
            }
            i++;
        }
        cout <<ans<< endl;
    }
}
