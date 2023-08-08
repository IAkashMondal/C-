#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int DuplicateNums(vector<int> arr)
{
    // method ---1 with sort---->
    // sort(arr.begin(), arr.end());
    // int i = 0, j = 1;
    // while (j < arr.size() - 1)
    // {
    //     if (arr[i] == arr[j])
    //     {
    //         return arr[i];
    //     }
    //     else
    //     {
    //         i++;
    //         j++;
    //     }
    // }
    // return -1;



    // method --2----without sort----->
    // indexing method----------------->
    while ((arr[0] != arr[arr[0]]))
    {
        swap(arr[0], arr[arr[0]]);
    }
    return arr[0];
}
int main()
{

    vector<int> arr{1, 2, 2, 3, 2};
    int ans = DuplicateNums(arr);

    cout << ans << " ";

    return 0;
}
// Quistion link: https://leetcode.com/problems/find-the-duplicate-number/submissions/1012057094/