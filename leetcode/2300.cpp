// https://leetcode.com/problems/successful-pairs-of-spells-and-potions/

class Solution
{
public:
  vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
  {
    vector<int> pairs(spells.size(), 0);
    sort(potions.begin(), potions.end());

    for (int i = 0; i < spells.size(); i++)
    {
      int spell = spells[i];

      int low = 0;
      int high = potions.size() - 1;
      int mid = (low + high) >> 1;

      while (low <= high)
      {
        if ((long long)spell * (long long)potions[mid] >= success)
        {
          high = mid - 1;
        }
        else
        {
          low = mid + 1;
        }
        mid = (low + high) >> 1;
      }
      pairs[i] = potions.size() - low;
    }

    return pairs;
  }
};