// https://leetcode.com/problems/validate-stack-sequences/

class Solution
{
public:
  bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
  {
    vector<int> nums{-1};

    int i = 0;
    int j = 0;

    while (i < pushed.size() || j < popped.size())
    {
      if (i < pushed.size() && nums.back() == popped[j])
      {
        nums.pop_back();
        j++;
      }
      else if (i < pushed.size() && nums.back() != popped[j])
      {
        nums.push_back(pushed[i]);
        i++;
      }
      else
      {
        while (nums.size() > 1)
        {
          if (nums.back() != popped[j])
          {
            return false;
          }
          else
          {
            nums.pop_back();
            j++;
          }
        }
      }
    }

    return true;
  }
};