// https://leetcode.com/problems/search-a-2d-matrix/

class Solution
{
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target)
  {
    int m = matrix[0].size();
    int n = matrix.size();

    for (int i = 0; i < n; i++)
    {
      int s = 0;
      int e = m - 1;
      int mid = s + (e - s) / 2;

      while (s <= e)
      {
        if (matrix[i][mid] == target)
        {
          return true;
        }
        else if (matrix[i][mid] > target)
        {
          e = mid - 1;
        }
        else
        {
          s = mid + 1;
        }

        mid = s + (e - s) / 2;
      }
    }
    return false;
  }
};

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int start = 0;
//         int end = row*col - 1;

//         int mid = (start+end)/2;

//         while(start<=end){
//             int element = matrix[mid/col][mid%col];

//             if(element==target){
//                 return 1;
//             }

//             if(element<target){
//                 start = mid+1;
//             }
//             else{
//                 end = mid-1;
//             }
//             mid = (start+end)/2;
//         }
//         return 0;
//     }
// };

// class Solution
// {
// public:
//   bool searchMatrix(vector<vector<int>> &matrix, int target)
//   {
//     int m = matrix[0].size();
//     int n = matrix.size();

//     for (int i = 0; i < n; i++)
//     {
//       for (int j = 0; j < m; j++)
//       {
//         if (matrix[i][j] == target)
//         {
//           return true;
//         }
//       }
//     }
//     return false;
//   }
// };