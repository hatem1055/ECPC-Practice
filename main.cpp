#include <iostream>
#include <string>

int i;
using namespace std;

int main() {
    int size;
    cout<<"Enter the number of tickets."<<endl;
    cin >> size;
    string arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        while (arr[i].size() != 6) {
            cout << "The ticket must be 5 digits" << endl;
            cin >> arr[i];

        }

    }
    for(int j=0;j< size ;j++){
        if (((arr[j].at(1)-0) + (arr[j].at(0)-0) + (arr[j].at(2)-0)) == (arr[j].at(3)-0) + (arr[j].at(4)-0) + (arr[j].at(5)-0)) {
            cout << "YES"<<endl;

        }else cout<<"NO"<<endl;




    }
}

