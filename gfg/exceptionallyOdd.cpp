// https://practice.geeksforgeeks.org/problems/find-the-odd-occurence4820/1

class Solution
{
public:
  int getOddOccurrence(int arr[], int n)
  {
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      ans ^= arr[i];
    }

    return ans;
  }
};