class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        vector<int> countArray;

        int i = 0;
        while (i < arr.size())
        {
            int count = 1;
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[j] == arr[i])
                {
                    count++;
                }
            }
            countArray.push_back(count);
            i += count;
        }

        sort(countArray.begin(), countArray.end());

        for (int i = 0; i < countArray.size() - 1; i++)
        {
            if (countArray[i] == countArray[i + 1])
            {
                return false;
            }
        }
        return true;
    }
};