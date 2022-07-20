#include <iostream>
#include <map>

using namespace std; 

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n, k;
        cin >> n;
        cin >> k;
        map<int, int> first;
        map<int, int> last;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            if(first.find(x) == first.end()){
                first[x] = j;
            }
            last[x] = j;
        }
        for(int j = 0; j < k; j++){
            long long a, b;
            cin >> a;
            cin >> b;
            if(first.count(a) && first.count(b) && first[a] <= last[b]){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}