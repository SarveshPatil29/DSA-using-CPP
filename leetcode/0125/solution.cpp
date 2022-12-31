// https://leetcode.com/problems/valid-palindrome

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string s1 = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]) || isdigit(s[i]))
            {
                s1 += tolower(s[i]);
            }
        }

        int start = 0;
        int end = s1.size() - 1;

        while (start <= end)
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
};