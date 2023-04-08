// https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/

class Solution
{
public:
  int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts)
  {
    sort(horizontalCuts.begin(), horizontalCuts.end());
    sort(verticalCuts.begin(), verticalCuts.end());

    int maxLength = max(verticalCuts[0], w - verticalCuts[verticalCuts.size() - 1]);
    int maxHeight = max(horizontalCuts[0], h - horizontalCuts[horizontalCuts.size() - 1]);

    for (int i = 1; i < horizontalCuts.size(); i++)
    {
      maxHeight = max(maxHeight, horizontalCuts[i] - horizontalCuts[i - 1]);
    }

    for (int i = 1; i < verticalCuts.size(); i++)
    {
      maxLength = max(maxLength, verticalCuts[i] - verticalCuts[i - 1]);
    }

    return (1LL * maxLength * maxHeight) % 1000000007;
  }
};