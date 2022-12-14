// Peak Index in a Mountain Array

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end - start) / 2;

        while (start <= end)
        {
            if (mid == 0)
            {
                start = 1;
            }
            else if (mid == arr.size() - 1)
            {
                end = mid - 1;
            }
            else if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
            {
                return mid;
            }
            else if (arr[mid - 1] > arr[mid])
            {
                end = mid - 1;
            }
            else if (arr[mid - 1] < arr[mid])
            {
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return 0;
    }
};