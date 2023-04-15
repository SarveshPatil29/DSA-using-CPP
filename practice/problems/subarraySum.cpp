#include <iostream>
#include <vector>
using namespace std;

int main()
{

  int size = 0;
  cin >> size;
  vector<int> arr(size, 0);

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  int ans = 0;

  for (int i = 0; i < size; i++)
  {
    int temp = arr[i];
    ans += temp;

    for (int j = i + 1; j < size; j++)
    {
      temp += arr[j];
      ans += temp;
    }
  }

  cout << ans << endl;

  return 0;
}