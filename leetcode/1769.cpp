// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/

class Solution
{
public:
  vector<int> minOperations(string boxes)
  {
    int n = boxes.size();
    vector<int> ans(n);
    int ahead = 0;
    int behind = 0;

    for (int i = 0; i < n; i++)
    {
      if (boxes[i] == '1')
      {
        ans[0] += i;
        ahead++;
      }
    }

    if (boxes[0] == '1')
    {
      ahead--;
      behind++;
    }

    for (int i = 1; i < n; i++)
    {
      ans[i] = ans[i - 1] - ahead + behind;
      if (boxes[i] == '1')
      {
        ahead--;
        behind++;
      }
    }
    return ans;
  }
};

// class Solution
// {
// public:
//   vector<int> minOperations(string boxes)
//   {
//     int n = boxes.size();
//     vector<int> ans(n);

//     for (int i = 0; i < n; i++)
//     {
//       int count = 0;
//       for (int j = 0; j < n; j++)
//       {
//         if (j != i && boxes[j] == '1')
//         {
//           count += abs(j - i);
//         }
//       }
//       ans[i] = count;
//     }
//     return ans;
//   }
// };