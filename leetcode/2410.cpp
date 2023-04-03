// https://leetcode.com/problems/maximum-matching-of-players-with-trainers/

class Solution
{
public:
  int matchPlayersAndTrainers(vector<int> &players, vector<int> &trainers)
  {
    sort(players.begin(), players.end(), greater<int>());
    sort(trainers.begin(), trainers.end(), greater<int>());

    int i = 0;
    int j = 0;
    int ans = 0;

    while (i < players.size() && j < trainers.size())
    {
      if (players[i] > trainers[j])
      {
        i++;
      }
      else
      {
        ans++;
        i++;
        j++;
      }
    }

    return ans;
  }
};