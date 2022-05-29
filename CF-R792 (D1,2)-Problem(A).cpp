#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >>t;
    char arr[t];
    int c=0;
    for(int i=0;i<t;i++)
    {
        string a;
        cin >>a;
        if(a.size()==2){
            arr[c]=a[1];
            c++;
        }
        else
        {
            sort(a.begin(),a.end());
            arr[c]=a[0];
            c++;
        }
    }
    for(int i=0;i<t;i++)
    {
        cout <<arr[i]<<'\n';
    }
    return 0;
}

