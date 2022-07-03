#include<iostream>
#include<vector>
using namespace std;

int main()
{
int n, k, c,score,participants;
vector<int> vec;
cin >> n >> k;
if(n<1 || k>n || n>50)
{
    cin >> n >> k;
}
for(int i = 0; i<n;i++)
{
cin >> score;
vec.push_back(score);
}
for(int j=0 ; j < vec.size(); j++){
    if(j+1==k)
        c= vec[j];
}
for(int m: vec) {
    if (m >= c && m != 0) {
        participants++;
    }
}
cout<<participants;
}