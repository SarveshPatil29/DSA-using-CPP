// https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1

class Solution
{
public:
  int rowWithMax1s(vector<vector<int>> arr, int n, int m)
  {
    int ans = -1;
    int index = m;
    for (int i = 0; i < m; i++)
    {
      if (arr[0][i] == 1)
      {
        index = i;
        ans = 0;
        break;
      }
    }

    for (int i = 1; i < n; i++)
    {
      int j = 0;
      while (j < index)
      {
        if (arr[i][j] == 1)
        {
          ans = i;
          index = j;
          break;
        }
        j++;
      }
    }

    return ans;
  }
};

// class Solution
// {
// public:
//   int rowWithMax1s(vector<vector<int>> arr, int n, int m)
//   {
//     int count = 0;
//     int ans = -1;

//     for (int i = 0; i < n; i++)
//     {
//       int tempCount = 0;
//       for (int j = 0; j < m; j++)
//       {
//         if (arr[i][j] == 1)
//         {
//           tempCount++;
//         }
//       }

//       if (tempCount > count)
//       {
//         ans = i;
//         count = tempCount;
//       }
//     }

//     return ans;
//   }
// };