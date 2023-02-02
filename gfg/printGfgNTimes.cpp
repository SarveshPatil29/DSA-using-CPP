// https://practice.geeksforgeeks.org/problems/print-gfg-n-times/

class Solution
{
public:
  void printGfg(int N)
  {
    if (N == 0)
    {
      return;
    }

    cout << "GFG"
         << " ";
    printGfg(N - 1);
  }
};