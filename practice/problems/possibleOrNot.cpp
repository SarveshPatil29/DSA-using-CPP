#include <iostream>
#include <vector>
using namespace std;

void solution(vector<int> &nums, int size, int target, int index, int curr)
{
  if (index == size)
  {
    cout << "NO" << endl;
    return;
  }
  if (curr == target)
  {
    cout << "YES" << endl;
    return;
  }

  int temp = curr;

  curr &= nums[index];
  solution(nums, size, target, index + 1, curr);

  curr = temp;
  solution(nums, size, target, index + 1, curr);
}

int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int size, target;
    cin >> size >> target;
    vector<int> nums(size);

    for (int i = 0; i < size; i++)
    {
      cin >> nums[i];
    }
    int curr = 1;
    solution(nums, size, target, 0, curr);
  }
  return 0;
}
