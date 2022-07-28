#include <iostream>
#include <string>
using namespace std;

int main() {
    int y,w;
    int c=0;
    string out[6] = {"1/6" ,"1/3","1/2","2/3","5/6","1/1"};
    cin >> y >> w;
    int res = max(y,w);
    for(int i =0;i < res ; i++){
        c++;
    }
    cout << out[6-c];
}
