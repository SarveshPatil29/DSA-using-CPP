// https://leetcode.com/problems/boats-to-save-people/

class Solution
{
public:
  int numRescueBoats(vector<int> &people, int limit)
  {
    sort(people.begin(), people.end());
    int i = 0;
    int j = people.size() - 1;
    int ans = 0;

    while (i <= j)
    {
      int count = 0;
      if (people[i] + people[j] <= limit)
      {
        ans++;
        i++;
        j--;
      }
      else
      {
        ans++;
        j--;
      }
    }

    return ans;
  }
};