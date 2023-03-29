// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    set<char> mySet;
    int maxLength = 0;
    int left = 0;
    for (int right = 0; right < s.length(); right++)
    {
      if (!mySet.count(s[right]))
      {
        mySet.insert(s[right]);
        maxLength = max(maxLength, right - left + 1);
      }
      else
      {
        while (s[right] != s[left])
        {
          mySet.erase(s[left]);
          left++;
        }

        mySet.erase(s[left]);
        left++;
        mySet.insert(s[right]);
      }
    }

    return maxLength;
  }
};

// class Solution
// {
// public:
//   int lengthOfLongestSubstring(string s)
//   {
//     int maxLength = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//       int length = 1;
//       set<char> mySet;
//       mySet.insert(s[i]);
//       for (int j = i + 1; j < s.length(); j++)
//       {
//         if (mySet.count(s[j]))
//         {
//           break;
//         }
//         else
//         {
//           mySet.insert(s[j]);
//           length++;
//         }
//       }
//       maxLength = max(maxLength, length);
//     }

//     return maxLength;
//   }
// };