#include <iostream>
#include <vector>
using namespace std;

void findAllSubsequence(vector<int> &ans, int index, vector<int> &arr, int size)
{
  if (index == size)
  {
    for (auto it : ans)
    {
      cout << it << " ";
    }
    cout << endl;
    return;
  }

  ans.push_back(arr[index]);
  findAllSubsequence(ans, index + 1, arr, size);

  ans.pop_back();
  findAllSubsequence(ans, index + 1, arr, size);
}

int main()
{
  int size = 0;
  cin >> size;
  vector<int> arr(size, 0);

  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }

  vector<int> ans;

  findAllSubsequence(ans, 0, arr, arr.size());

  return 0;
}