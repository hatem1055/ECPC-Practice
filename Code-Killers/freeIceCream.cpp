#include <iostream>

using namespace std;

int main(){
    int n, distress = 0;
    long long sum;
    cin >> n >> sum;
    for(int i = 0; i < n; i++){
        int x;
        char ch;
        cin >> ch >> x;
        if(ch == '+'){
            sum+= x;
        }
        else if(ch == '-'){
            if(x > sum){
                distress++;
            }
            else{
                sum-=x;
            }
        }
    }
    cout << sum << ' ' << distress;
    return 0;
}