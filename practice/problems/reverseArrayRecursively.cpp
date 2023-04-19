#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int left, int right)
{
  if (left >= right)
  {
    return;
  }

  swap(arr[left], arr[right]);
  reverseArray(arr, left + 1, right - 1);
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

  reverseArray(arr, 0, arr.size() - 1);

  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}