#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1 || arr[i]==2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<(arr[i]-1)/2<<endl;
        }
    }
}