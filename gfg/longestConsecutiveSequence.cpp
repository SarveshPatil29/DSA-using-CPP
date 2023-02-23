// https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/0

class Solution
{
public:
  // arr[] : the input array
  // N : size of the array arr[]

  // Function to return length of longest subsequence of consecutive integers.
  int findLongestConseqSubseq(int arr[], int N)
  {
    set<int> mySet;

    for (int i = 0; i < N; i++)
    {
      mySet.insert(arr[i]);
    }

    int longestStreak = 0;

    for (int i = 0; i < N; i++)
    {
      if (!mySet.count(arr[i] - 1))
      {
        int currentStreak = 0;
        int num = arr[i];
        while (mySet.count(num))
        {
          currentStreak++;
          num++;
        }

        longestStreak = max(longestStreak, currentStreak);
      }
    }

    return longestStreak;
  }
};