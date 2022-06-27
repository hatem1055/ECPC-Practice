#include<iostream>
#include<string>
#include <sstream>
using namespace std ;
int main() {
    string time1 {} ;
    string time2 {} ;
    
    cin >> time1 ;
    cin >> time2; 
    int h1 {} ;
    h1 = (time1[0] - '0') * 10 + (time1[1] - '0') ;
    int m1 {} ;
    m1 = (time1[3] - '0') * 10 + (time1[4] - '0') ;
    int h2 {} ;
    h2 = (time2[0] - '0') * 10 + (time2[1] - '0') ;
    int m2 {} ;
    m2 = (time2[3] - '0') * 10 + (time2[4] - '0') ;
    int t1 {} ;
    t1 = h1 * 60 + m1 ;
    int t2 {} ;
    t2 = h2 * 60 + m2 ;
    int avg_final {} ;
    avg_final = (t1 + t2) / 2 ;
    int h3 {} ;
    h3 = avg_final/60 ;
    int m3 {} ;
    m3 = avg_final%60 ;
    if (h3 < 10 && m3 < 10)
        cout << "0" << h3 << ":" << "0" << m3 ;
    else if (h3 < 10 && m3 >= 10)
        cout << "0" << h3 << ":" << m3 ;
    else if (h3 >= 10 && m3 < 10)
        cout << h3 << ":" << "0" << m3 ;
    else if (h3 >= 10 && m3 >= 10)
        cout << h3 << ":" << m3 ;
    return 0 ;
}
