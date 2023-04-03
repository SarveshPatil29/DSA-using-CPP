// https://leetcode.com/problems/mice-and-cheese/

class Solution
{
public:
  int miceAndCheese(vector<int> &reward1, vector<int> &reward2, int k)
  {
    int ans = 0;
    for (int i = 0; i < reward2.size(); i++)
    {
      ans += reward2[i];
      reward2[i] = reward1[i] - reward2[i];
    }

    sort(reward2.begin(), reward2.end(), greater<int>());
    for (int i = 0; i < k; i++)
    {
      ans += reward2[i];
    }

    return ans;
  }
};