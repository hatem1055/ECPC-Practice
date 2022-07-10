#include <bits/stdc++.h>
using namespace std;
int c=0;
int greedy(int n,int arr[],int sum,int comp){
    if(comp <= sum) {
        c++;
        return greedy(n-1,arr,sum-arr[n-1],comp+arr[n-1]);
        }
    else return c;
}
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,sum=0,comp=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr,arr+n);
    if(n == 1) cout << "1";
    else cout << greedy(n,arr,sum,comp);
    return 0;
}