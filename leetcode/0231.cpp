class Solution
{
public:
  bool isPowerOfTwo(int n)
  {
    int m = 1;
    while (m <= n)
    {
      if (m == n)
      {
        return true;
      }
      if (m >= INT_MAX / 2)
      {
        return false;
      }
      m *= 2;
    }
    return false;
  }
};

// class Solution
// {
// public:
//     bool isPowerOfTwo(int n)
//     {
//         if (n <= 0)
//         {
//             return false;
//         }
//         int count = 0;
//         while (n != 0)
//         {

//             if ((n & 1) == 1)
//             {
//                 if (n < INT_MAX - 1)
//                 {
//                     count++;
//                 }
//             }
//             n = n >> 1;
//         }
//         if (count == 1)
//         {
//             return true;
//         }
//         return false;
//     }
// };