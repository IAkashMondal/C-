#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 3, 3, 4, 5, 4, 4, 7};
    int ans = -1;
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (start + end) / 2;
    int target;
    cout << "enter target" << endl;
    cin >> target;
    while (start <= end)
    {

        if (arr[mid] == target)
        {
            ans = mid;
            // search in left -->
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }

    cout << ans << endl;
    return 0;
}