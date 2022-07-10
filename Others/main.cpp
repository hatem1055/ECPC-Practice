#include <bits/stdc++.h>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int arr[n],target = n;
    priority_queue <int> pq;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i] == target) {
            cout << target << " ";
            target--;
                while (pq.size() > 0 && pq.top() == target) {
                    cout << pq.top() << " ";
                    pq.pop();
                    target--;
                }
        }
        else{
            pq.push(arr[i]);
        }
        cout << endl;
    }
    return 0;
}
