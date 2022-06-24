#include <iostream>
using namespace std;
int main(){
    int size,sumx=0,sumy=0,sumz=0;
    cin >> size;
    int arr[size][3];
    for(int i=0;i<size;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<1;j++){
            sumx += arr[i][j];
        }
    }
    for(int i=0;i<size;i++){
        for(int j=1;j<2;j++){
            sumy += arr[i][j];
        }
    }
    for(int i=0;i<size;i++){
        for(int j=2;j<3;j++){
            sumz += arr[i][j];
        }
    }
    if((sumx==0)&&(sumy==0)&&(sumz==0))
        cout << "YES";
    else cout << "NO";

}






