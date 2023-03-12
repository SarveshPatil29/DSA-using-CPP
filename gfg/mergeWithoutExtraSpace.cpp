// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

class Solution
{
public:
  // Function to merge the arrays.
  void merge(long long arr1[], long long arr2[], int n, int m)
  {
    int right = n - 1;
    int left = 0;
    while (left < m && right >= 0 && arr1[right] > arr2[left])
    {
      swap(arr1[right], arr2[left]);
      left++;
      right--;
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
  }
};