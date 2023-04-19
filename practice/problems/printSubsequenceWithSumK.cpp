#include <iostream>
#include <vector>
using namespace std;

void findAllSubsequence(vector<int> &ans, int index, vector<int> &arr, int size, int sum, int k)
{
  if (index == size && sum == k)
  {
    for (auto it : ans)
    {
      cout << it << " ";
    }
    cout << endl;
    return;
  }

  if (index == size && sum != k)
  {
    return;
  }

  ans.push_back(arr[index]);
  findAllSubsequence(ans, index + 1, arr, size, sum + arr[index], k);

  ans.pop_back();
  findAllSubsequence(ans, index + 1, arr, size, sum, k);
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

  findAllSubsequence(ans, 0, arr, arr.size(), 0, k);

  return 0;
}