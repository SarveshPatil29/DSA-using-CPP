// https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

class Solution
{
public:
  int maxLen(vector<int> &A, int n)
  {
    unordered_map<int, int> map;
    int sum = 0;
    int largest = -1;
    map[0] = -1;

    for (int i = 0; i < A.size(); i++)
    {
      sum += A[i];
      int temp = 0;
      if (map.find(sum) != map.end())
      {
        temp = i - map[sum];
      }
      else
      {
        map[sum] = i;
      }
      largest = max(largest, temp);
    }

    return largest;
  }
};