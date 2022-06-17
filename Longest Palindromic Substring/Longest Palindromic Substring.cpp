class Solution {
private:
    int maxlen, start;

public:
    string longestPalindrome(string s) {
        int len = s.length();
        if (len == 0)
            return "";
        if (len < 2)
            return s;

        for (int i = 0; i < s.length(); i++)
        {
            expand(s, i, i); // assume center is only 1 letter we try to expand the palindrome as possible
            expand(s, i, i + 1); // assume center is 2 character like "abba" >>  b b

        }
        return s.substr(start, maxlen);
    }
    void expand(string str, int left, int right)
    {
        while (left >= 0 && right < str.length() && str[left] == str[right])
        {
            left--;
            right++;

        }         //     length of palindrome
        if (maxlen < right - left - 1)
        {
            start = left + 1;
            maxlen = right - left - 1;
        }
    }
};