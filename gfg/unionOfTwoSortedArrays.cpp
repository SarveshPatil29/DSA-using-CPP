// https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1

class Solution
{
public:
  // arr1,arr2 : the arrays
  //  n, m: size of arrays
  // Function to return a list containing the union of the two arrays.
  vector<int> findUnion(int arr1[], int arr2[], int n, int m)
  {
    int i = 0;
    int j = 0;
    vector<int> ans = {INT_MIN};

    while (i < n && j < m)
    {
      if (arr1[i] == arr2[j])
      {
        if (ans.back() != arr1[i])
        {
          ans.push_back(arr1[i]);
        }
        i++;
        j++;
      }
      else if (arr1[i] > arr2[j])
      {
        if (ans.back() != arr2[j])
        {
          ans.push_back(arr2[j]);
        }
        j++;
      }
      else if (arr1[i] < arr2[j])
      {
        if (ans.back() != arr1[i])
        {
          ans.push_back(arr1[i]);
        }
        i++;
      }
    }

    while (i < n)
    {
      if (ans.back() != arr1[i])
      {
        ans.push_back(arr1[i]);
      }
      i++;
    }

    while (j < m)
    {
      if (ans.back() != arr2[j])
      {
        ans.push_back(arr2[j]);
      }
      j++;
    }

    ans.erase(ans.begin(), ans.begin() + 1);

    return ans;
  }
};