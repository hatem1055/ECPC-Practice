#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

/*int main() {
    int numbers[3];
    int n,t;
    cin >> t;
    while(t--){
        cin >> numbers[0] >> numbers[1] >> numbers[2] >> n;
        sort(numbers , numbers + 3);
        n = n-(numbers[0]-numbers[1]);
        n = n-(numbers[0]-numbers[2]);
        if(n<0){
            cout << "NO" << endl;
            return 0;
        }
        if(n%3 ==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}*/

int main() {
    int numbers[3],dif,t,n;
    cin >> t;
    while(t--){
        cin >> numbers[0] >> numbers[1] >> numbers[2] >> n;
        sort(numbers,numbers + 3);
        dif = numbers[2] - numbers[0];
        dif += numbers[2] - numbers[1];
        if(n>=dif){
            n-=dif;
            if(n%3 ==0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }


}
