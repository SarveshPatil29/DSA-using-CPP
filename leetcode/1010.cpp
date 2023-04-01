// https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/

class Solution
{
public:
  int numPairsDivisibleBy60(vector<int> &time)
  {
    unordered_map<int, int> freq;
    int ans = 0;

    for (int i = 0; i < time.size(); i++)
    {
      time[i] %= 60;
      freq[time[i]]++;
    }

    for (int i = 0; i < time.size(); i++)
    {
      if (time[i] > 0 && time[i] < 30)
      {
        int toFind = 60 - time[i];
        if (freq.find(toFind) != freq.end())
        {
          ans += freq[toFind];
        }
      }
      if (time[i] == 0)
      {
        if (freq[0] > 1)
        {
          int n = freq[0];
          ans += (long)n * (n - 1) / 2;
          freq.erase(0);
        }
      }
      else if (time[i] == 30)
      {
        if (freq[30] > 1)
        {
          int n = freq[30];
          ans += n * (n - 1) / 2;
          freq.erase(30);
        }
      }
    }

    return ans;
  }
};