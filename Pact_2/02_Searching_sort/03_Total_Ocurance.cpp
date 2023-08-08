#include <iostream>
#include <vector>
using namespace std;

int First_elem(vector<int> arr, int target)
{
    int ans = -1;
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (target == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}
int Last_elem(vector<int> arr, int target)
{
    int ans = -1;
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (target == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}
int main()
{
    int target;
    cout << "Enter the Number You Want to Search" << endl;
    cin >> target;
    vector<int> arr{1, 2, 3, 4, 4, 4, 4, 5, 7, 7, 7, 8, 9, 10};
    int First_Index = First_elem(arr, target);
    int Last_Index = Last_elem(arr, target);
    int result = (Last_Index - First_Index) + 1;

    cout << "Total Occruance of " << target << " is: " << result << endl;
    return 0;
}