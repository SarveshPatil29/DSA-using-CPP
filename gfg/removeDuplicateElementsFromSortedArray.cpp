// https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1

class Solution
{
public:
  int remove_duplicate(int a[], int n)
  {
    int i = 0;

    for (int j = 1; j < n; j++)
    {
      if (a[i] != a[j])
      {
        a[i + 1] = a[j];
        i++;
      }
    }

    return i + 1;
  }
};