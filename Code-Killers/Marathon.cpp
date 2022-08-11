#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        int inp,count=0;
        for(int i=0;i < 3;i++){
            cin >> inp;
            if(a < inp){
                count++;
            }
        }
        cout << count << endl;
    }
}