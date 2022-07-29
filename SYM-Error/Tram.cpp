#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    int sum = 0,k = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum = (a + k) - b;
        if(sum < 0)
            k = 0;
        else
            k = sum;
    }
    cout << sum;
}