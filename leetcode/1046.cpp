// https://leetcode.com/problems/last-stone-weight/

class Solution
{
public:
  int lastStoneWeight(vector<int> &stones)
  {
    priority_queue<int> pq;
    for (int i = 0; i < stones.size(); i++)
    {
      pq.push(stones[i]);
    }

    while (pq.size() > 1)
    {
      int largest = pq.top();
      pq.pop();
      int secondLargest = pq.top();
      pq.pop();

      if (largest != secondLargest)
      {
        pq.push(largest - secondLargest);
      }
    }

    if (pq.size() == 1)
    {
      return pq.top();
    }
    else
    {
      return 0;
    }
  }
};