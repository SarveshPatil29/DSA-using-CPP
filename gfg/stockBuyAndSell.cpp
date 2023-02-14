// https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/0

void stockBuySell(int price[], int n)
{
  vector<pair<int, int>> v;
  pair<int, int> p(-1, -1);

  for (int i = 0; i < n; i++)
  {
    if ((price[i] < price[i + 1] && i != n - 1) && p.first == -1)
    {
      p.first = i;
    }
    if ((price[i] > price[i + 1] || i == n - 1) && p.first != -1)
    {
      p.second = i;
    }
    if (p.first != -1 && p.second != -1)
    {
      v.push_back(p);
      p.first = -1;
      p.second = -1;
    }
  }

  if (v.size() == 0)
  {
    cout << "No Profit";
  }
  else
  {
    for (int i = 0; i < v.size(); i++)
    {
      cout << "(" << v[i].first << " " << v[i].second << ") ";
    }
  }
  cout << endl;
}