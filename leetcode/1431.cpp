// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution
{
public:
  vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
  {
    int maxElem = 0;
    for (int i = 0; i < candies.size(); i++)
    {
      maxElem = max(candies[i], maxElem);
    }

    vector<bool> ans(candies.size(), false);

    for (int i = 0; i < candies.size(); i++)
    {
      ans[i] = candies[i] + extraCandies >= maxElem ? true : false;
    }

    return ans;
  }
};