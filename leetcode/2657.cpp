// https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/

class Solution
{
public:
  vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
  {
    set<int> st;
    int size = A.size();
    vector<int> ans(size);
    int temp = 0;

    for (int i = 0; i < size; i++)
    {

      if (st.count(A[i]))
      {
        temp++;
      }
      else
      {
        st.insert(A[i]);
      }

      if (st.count(B[i]))
      {
        temp++;
      }
      else
      {
        st.insert(B[i]);
      }

      ans[i] = temp;
    }

    return ans;
  }
};