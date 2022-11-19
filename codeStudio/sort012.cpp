// https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055

#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else if (arr[i] == 1)
        {
            oneCount++;
        }
        else
        {
            twoCount++;
        }
    }

    vector<int> ans;
    for (int i = 0; i < zeroCount; i++)
    {
        ans.push_back(0);
    }

    for (int i = 0; i < oneCount; i++)
    {
        ans.push_back(1);
    }

    for (int i = 0; i < twoCount; i++)
    {
        ans.push_back(2);
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
}

// Method 2

// #include <bits/stdc++.h>
// void sort012(int *arr, int n)
// {
//     int i = 0;       // for traversing
//     int zero = 0;    // place for 0's
//     int two = n - 1; // place for 2's
//                      // after 0's and 2's have been sorted, 1's will get automatically sorted

//     while (i <= two)
//     { // i<=two since sorting will be affected
//         if (arr[i] == 0)
//         {
//             swap(arr[i], arr[zero]);
//             zero++;
//             i++;
//         }
//         else if (arr[i] == 1)
//         {
//             i++;
//         }
//         else if (arr[i] == 2)
//         {
//             swap(arr[i], arr[two]);
//             two--;
//             // we did not do i++ here since a 0 can be encountered
//         }
//     }
// }