// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397

int findDuplicate(vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    int num = 1;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        ans = ans ^ num;
        num++;
    }

    return ans;
}
