// https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633

#include <bits/stdc++.h>
bool checkPalindrome(string s)
{
    string s1 = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]) || isdigit(s[i]))
        {
            s1 += char(tolower(s[i]));
        }
    }

    int start = 0;
    int end = s1.size() - 1;

    while (start < end)
    {
        if (s1[start] == s1[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }

    return true;
}