#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vector1;
    vector<int>vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    vector2.push_back(100);
    vector2.push_back(200);
    vector<vector<int>>vector_2d;
    vector_2d.push_back(vector1);
    cout << vector_2d[0][0]<<endl;
    cout << vector_2d[0][1]<<endl;
    vector_2d.push_back(vector2);
    cout<<vector_2d[1][0]<<endl;
    cout<<vector_2d[1][1]<<endl;
    vector_2d.at(0).at(0)=1000;
    cout << vector_2d.at(0).at(0)<<endl;
    cout << vector_2d.at(0).at(1)<<endl;



}