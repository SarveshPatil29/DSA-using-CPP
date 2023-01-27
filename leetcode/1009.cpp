// https://leetcode.com/problems/complement-of-base-10-integer/

class Solution
{
public:
    int bitwiseComplement(int n)
    {
        if (n == 0)
        {
            return 1;
        }

        int compN = ~n;

        int count = 0;

        while (n != 0)
        {
            n = n >> 1;
            count++;
        }

        int mask = 0;
        while (count != 0)
        {
            mask = mask << 1;
            mask = mask | 1;
            count--;
        }

        return compN & mask;
    }
};