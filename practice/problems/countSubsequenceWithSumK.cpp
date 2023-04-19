#include <iostream>
#include <vector>
using namespace std;

int findAllSubsequence(int index, vector<int> &arr, int size, int sum, int k)
{
  if (index == size && sum == k)
  {
    return 1;
  }

  if (index == size && sum != k)
  {
    return 0;
  }

  int l = findAllSubsequence(index + 1, arr, size, sum + arr[index], k);

  int r = findAllSubsequence(index + 1, arr, size, sum, k);

  return l + r;
}

int main()
{
  int size = 0;
  cin >> size;

  int k = 0;
  cin >> k;

  vector<int> arr(size, 0);
  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }

  vector<int> ans;

  cout << findAllSubsequence(0, arr, arr.size(), 0, k) << endl;

  return 0;
}