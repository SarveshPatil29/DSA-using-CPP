// https://practice.geeksforgeeks.org/problems/missing-number4257/1

int missingNumber(int A[], int N)
{
  int ans = 0;

  for (int i = 0; i < N - 1; i++)
  {
    ans ^= A[i];
    ans ^= i + 1;
  }

  ans ^= N;

  return ans;
}