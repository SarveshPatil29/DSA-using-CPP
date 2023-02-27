// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1

vector<int> find(int nums[], int n, int target)
{
  int s = 0;
  int e = n - 1;
  int m = s + (e - s) / 2;
  int i = -1;
  while (s <= e)
  {
    if (nums[m] == target)
    {
      i = m;
      break;
    }
    else if (nums[m] > target)
    {
      e = m - 1;
    }
    else
    {
      s = m + 1;
    }

    m = s + (e - s) / 2;
  }

  vector<int> ans{-1, -1};
  int j = i;
  while (j >= 0 && nums[j] == target)
  {
    ans[0] = j;
    j--;
  }

  int k = i;
  while (k < n && nums[k] == target)
  {
    ans[1] = k;
    k++;
  }

  return ans;
}