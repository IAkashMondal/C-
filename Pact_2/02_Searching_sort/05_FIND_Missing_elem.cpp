#include <iostream>
#include <vector>
using namespace std;

int findMissingElement(const vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // If the difference between the element and its index is not equal
        // to the difference between the first element and its index, then
        // the missing element is on the left side.
        if (arr[mid] - mid != arr[0] - 0)
        {
            if (mid == 0 || (arr[mid - 1] - (mid - 1)) == (arr[mid] - mid) - 1)
            {
                return arr[mid] - 1;
            }
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1; // No missing element found
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 7};
    int missingElement = findMissingElement(arr);

    if (missingElement != -1)
    {
        cout << "Missing element: " << missingElement << endl;
    }
    else
    {
        cout << "No missing element found." << endl;
    }

    return 0;
}
