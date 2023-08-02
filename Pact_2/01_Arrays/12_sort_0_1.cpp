#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr1 = {0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0};
    vector<int> ans;
    int start = 0;
    int i = 0;
    int end = arr1.size() - 1;
    while (start <= end)
    {
        if (arr1[i] == 0)
        {
            swap(arr1[i], arr1[start]);
            start++;
            i++;
        }
        else if (arr1[i] == 1)
        {
            swap(arr1[i], arr1[end]);
            end--;
        }
    }
    for (auto value : arr1)
    {
        cout << value << endl;
    }
    cout << endl;
    return 0;
}