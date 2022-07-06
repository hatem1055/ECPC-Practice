#include <iostream>
using namespace std;

int main() {
    int n,i=0,mas[]= {4, 7, 44 , 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777}; //14
    cin>>n;

    for (i=0;i<14;i++)
    {
        if (n%mas[i]==0)
        {
            cout << "YES" << endl;
            break;
        }
    }

    if (i==14) cout << "NO" << endl;
    return 0;
    
}
