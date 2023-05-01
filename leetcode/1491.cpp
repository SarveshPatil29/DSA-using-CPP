// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

class Solution
{
public:
  double average(vector<int> &salary)
  {
    int sum = 0;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int size = salary.size();

    for (int i = 0; i < size; i++)
    {
      sum += salary[i];
      mini = min(mini, salary[i]);
      maxi = max(maxi, salary[i]);
    }

    sum -= (mini + maxi);
    double ans = (double)sum / (double)(size - 2);
    return ans;
  }
};