// https://www.codingninjas.com/codestudio/problems/cooking-ninjas_1164174

#include <bits/stdc++.h>

bool isPossible(vector<int> &rank, int m, int mid)
{
    int count;
    int dish = 0;
    int time;

    for (int i = 0; i < rank.size(); i++)
    {
        time = 0;
        count = 1;
        while (true)
        {
            if ((time + (count * rank[i])) <= mid)
            {
                time += count * rank[i];
                dish++;
                count++;
                if (dish == m)
                    return true;
            }
            else
                break;
        }
    }

    return false;
}

int minCookTime(vector<int> &rank, int m)
{
    sort(rank.begin(), rank.end());
    int start = 0;

    int maximum = -1;
    for (int i = 0; i < rank.size(); i++)
    {
        maximum = max(maximum, rank[i]);
    }

    int end = maximum * m * (m + 1) / 2;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (isPossible(rank, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}
