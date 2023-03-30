// https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/

class Solution
{
public:
  static bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
  {
    return (a.second < b.second);
  }
  int findLeastNumOfUniqueInts(vector<int> &arr, int k)
  {
    unordered_map<int, int> map;

    for (int i = 0; i < arr.size(); i++)
    {
      map[arr[i]]++;
    }

    vector<pair<int, int>> elements;

    for (auto item : map)
    {
      pair<int, int> temp{item.first, item.second};
      elements.push_back(temp);
    }

    sort(elements.begin(), elements.end(), sortbysec);

    int i = 0;
    int n = 0;
    while (k)
    {
      if (elements[i].second > 0)
      {
        elements[i].second -= 1;
        k--;
        if (elements[i].second == 0)
        {
          n++;
        }
      }
      else
      {
        i++;
      }
    }

    return elements.size() - n;
  }
};