#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


// using stack for the undo process

stack<string> s1;

string undo()
{
    string x;
    s1.pop();
    x = s1.top();
    return x;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str = "";
    s1.push(str);
    int No_of_operations;
    cin >> No_of_operations;

    for (int i = 0; i < No_of_operations; i++) {
        int Selection;
        cin >> Selection;

        if (Selection == 1)
        {
            string w;
            cin >> w;
            str.append(w);
            s1.push(str);
        }
        else if (Selection == 2)
        {
            int k;
            cin >> k;
            str.erase(str.length() - k, str.length());
            s1.push(str);
        }
        else if (Selection == 3) {
            int k;
            cin >> k;
            cout << str[k - 1] << endl;
        }
        else if (Selection == 4)
        {
            str = undo();
        }
    }

}





