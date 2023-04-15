#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int deleteProducts(vector<int> &products, int m)
{
  unordered_map<int, int> map;
  for (int i = 0; i < products.size(); i++)
  {
    map[products[i]]++;
  }

  vector<pair<int, int>> freq;
  for (auto item : map)
  {
    freq.push_back({item.first, item.second});
  }

  for (int i = 0; i < freq.size(); i++)
  {
    cout << freq[i].first << " " << freq[i].second << endl;
  }

  return 0;
}

int main()
{
  int size = 0;
  cin >> size;
  vector<int> products(size, 0);

  for (int i = 0; i < size; i++)
  {
    cin >> products[i];
  }

  int m = 0;
  cin >> m;

  cout << deleteProducts(products, m);

  return 0;
}