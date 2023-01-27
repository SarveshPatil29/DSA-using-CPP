// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string

class Solution
{
public:
  string removeDuplicates(string s)
  {
    int i = 0;
    int j = 1;
    while (j < s.length())
    {
      if (s[i] == s[j])
      {
        if (i > 0)
        {
          i--;
          s.erase(s.begin() + i + 1);
          s.erase(s.begin() + i + 1);
          j = i + 1;
        }
        else
        {
          i = j + 1;
          s.erase(s.begin());
          s.erase(s.begin());
          i = i - 2;
          j = i + 1;
        }
      }
      else
      {
        i++;
        j++;
      }
    }

    return s;
  }
};

// Solution 2 :

//     class Solution
// {
// public:
//   string removeDuplicates(string s)
//   {
//     int i = 1;
//     string k;
//     k.push_back(s[0]);
//     while (i < s.length())
//     {
//       if (!k.empty() && s.length())
//       {
//         if (k.back() == s[i])
//         {
//           k.pop_back();
//         }
//         else
//         {
//           k.push_back(s[i]);
//         }
//       }
//       else
//         k.push_back(s[i]);
//       i++;
//     }
//     return k;
//   }
// };