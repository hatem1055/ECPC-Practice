#include <iostream>
#include <vector>
#include <string>
#include <map>
#include<algorithm>
#include <set>
#include <cmath>
#include <queue>
#include<unordered_map>
using namespace std;


int main()
{
    string name;
    cin >> name;
    set < char > yarab;
    for (int i = 0; i < name.length(); i++)
    {
        if (yarab.count(name[i]) > 1)
        {
            continue;
        }
        yarab.insert(name[i]);
    }
    if (yarab.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}