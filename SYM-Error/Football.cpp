#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int dangerous = 1;
    for (size_t i = 1; i < s.length(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            dangerous += 1;
            if (dangerous == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            dangerous = 1;
        }
    }

    cout << "NO" << endl;
    return 0;
}