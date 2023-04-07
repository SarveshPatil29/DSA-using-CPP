// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

class Solution
{
public:
  int maxScore(vector<int> &cardPoints, int k)
  {
    int s = 0;
    int e = cardPoints.size() - k;
    int sum = 0;
    int maxSum = 0;

    for (int i = e; i < cardPoints.size(); i++)
    {
      sum += cardPoints[i];
    }
    maxSum = sum;

    while (e < cardPoints.size())
    {
      sum = sum + cardPoints[s] - cardPoints[e];
      maxSum = max(maxSum, sum);
      s++;
      e++;
    }

    return maxSum;
  }
};