#include <iostream>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    int arr[n];
    for (int i=0;i<n;i++){
       cin>>arr[i];
    }
    int sum=0;
    for (int i=0;i<n;i++){
        if(arr[i] > 0 && arr[i] >= arr[k - 1])
            sum++;
        }
    cout<<sum;
}
