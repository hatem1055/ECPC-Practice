#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double sum;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sum = sum / double(n);
    cout<<fixed<<setprecision(12)<<sum<<endl;

}
