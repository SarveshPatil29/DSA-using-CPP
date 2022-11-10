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