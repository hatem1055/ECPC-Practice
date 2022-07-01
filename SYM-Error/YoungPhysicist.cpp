#include <iostream>

using namespace std;
int main()
{
    int n,sum = 0,sum1 = 0,sum2 = 0;
    cin >> n;
    int A[n][3];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
        sum += A[i][0];
        sum1 += A[i][1];
        sum2 += A[i][2];
    }
    if(sum==0 && sum1==0 && sum2==0)
        cout << "YES";
    else
        cout << "NO";
}
