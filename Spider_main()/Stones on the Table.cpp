#include <iostream>

using namespace std;

int main() {
    string str;
    int n,counter;
    cin >> n >> str;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
        {
            counter++;
        }
    }
    cout << counter;
}
