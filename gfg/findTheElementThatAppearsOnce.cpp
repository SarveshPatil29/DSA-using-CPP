// https://practice.geeksforgeeks.org/problems/element-appearing-once2552/0

class Solution
{
public:
  int search(int A[], int N)
  {
    int ans = 0;

    for (int i = 0; i < N; i++)
    {
      ans ^= A[i];
    }

    return ans;
  }
};