#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<long long , vector<long long> , greater<long long> > pq;
    long long health = 0;
    for(int i = 0 ; i <n; i ++){
        long long p;
        cin>>p;
        health+= p;
        pq.push(p);
        if(health < 0){
            health += abs(pq.top());
            pq.pop();
        }
    }
    cout<<pq.size()<<endl;
}