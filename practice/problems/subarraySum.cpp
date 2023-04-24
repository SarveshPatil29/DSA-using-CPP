#include <iostream>
#include <vector>
using namespace std;

void subarraySum(vector<int> arr)
{
  long int result = 0;
  int n = arr.size();

  // computing sum of subarray using formula
  for (int i = 0; i < n; i++)
    result += (arr[i] * (i + 1) * (n - i));

  // return all subarray sum
  cout << result << endl;
}

int main()
{

  int size = 0;
  cin >> size;
  vector<int> arr(size, 0);

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  subarraySum(arr);

  return 0;
}