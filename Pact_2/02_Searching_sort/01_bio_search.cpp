#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr1{1, 2, 3, 4, 5};
    int start = 0;
    int end = arr1.size() - 1;
    int mid = start-(start + end) / 2; 
    int target;

    cout << "Enter target to search: ";
    cin >> target;

    while (start <= end) // Change the condition to handle all possible cases
    {
        if (target == arr1[mid])
        {
            cout << "Found: " << arr1[mid];
            break;
        }
        else if (arr1[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2; 

    if (start > end)
    {
        cout << "Target not found in the array.";
    }

    cout << endl;
    return 0;
}
