// https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559

int isPossible(vector<int> &stalls, int k, int mid)
{
    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int start = 0;

    int maximum = -1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maximum = max(maximum, stalls[i]);
    }

    int end = maximum;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}