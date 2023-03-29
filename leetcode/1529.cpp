// https://leetcode.com/problems/minimum-suffix-flips/

class Solution
{
public:
  int minFlips(string target)
  {
    char status = '0';
    int ans = 0;

    for (int i = 0; i < target.size(); i++)
    {
      if (target[i] != status)
      {
        status = status == '0' ? '1' : '0';
        ans++;
      }
    }
    return ans;
  }
};

// class Solution
// {
// public:
//   int minFlips(string target)
//   {
//     string s = "";
//     for (int i = 0; i < target.size(); i++)
//     {
//       s.append("0");
//     }

//     int ans = 0;

//     bool isFlipped = false;

//     for (int i = 0; i < target.size(); i++)
//     {
//       if (target[i] != s[i] && isFlipped == false)
//       {
//         isFlipped = !isFlipped;
//         ans++;
//       }
//       else if (target[i] == s[i] && isFlipped == true)
//       {
//         isFlipped = !isFlipped;
//         ans++;
//       }
//     }

//     return ans;
//   }
// };