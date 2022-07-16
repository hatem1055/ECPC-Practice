#include <iostream>
#include<algorithm>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    c=a+b;
    string stra= to_string(a);
    string strb= to_string(b);
    string strc= to_string(c);

    stra.erase(remove(stra.begin(), stra.end(), '0'), stra.end());
    strb.erase(remove(strb.begin(), strb.end(), '0'), strb.end());
    strc.erase(remove(strc.begin(), strc.end(), '0'), strc.end());

    int myint1 = stoi(stra);
    int myint2 = stoi(strb);
    int myint3 = stoi(strc);

    if (myint1+myint2==myint3){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return(0);
}