// https://leetcode.com/problems/sort-the-students-by-their-kth-score/

class Solution
{
public:
  vector<vector<int>> sortTheStudents(vector<vector<int>> &score, int k)
  {
    int rows = score.size();
    int cols = score[0].size();
    vector<int> kthSubject(rows, 0);

    for (int i = 0; i < rows; i++)
    {
      kthSubject[i] = score[i][k];
    }

    sort(kthSubject.begin(), kthSubject.end(), greater<int>());

    int j = 0;
    for (int l = 0; l < rows; l++)
    {
      for (int i = l; i < rows; i++)
      {
        if (score[i][k] == kthSubject[j])
        {
          swap(score[i], score[j]);
          j++;
          break;
        }
      }
    }

    return score;
  }
};