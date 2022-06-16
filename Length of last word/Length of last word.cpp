class Solution {
public:
    int lengthOfLastWord(string s)
    {
        string help;
        bool flag = false;
        for (int i = s.length() - 1; i >= 0; i--) {

            if (s[i] == ' ' && flag == false) {
                continue;
            }
            else if (isalpha(s[i]))
                help += s[i]; flag = true;
            if (s[i] == ' ' && flag)
                break;
        }
        return help.length();

    }
};