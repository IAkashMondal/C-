#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{

    vector<int> arr1{1, 2, 3, 4, 5};
    vector<int> arr2{11, 2, 33, 44, 55};
    vector<int> arr3{11, 2, 333, 444, 554};
    int i, j, k;
    i=j=k=0;
    set<int> ans;

    while (i < arr1.size() && j < arr2.size() && k < arr3.size())
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            ans.insert(arr1[i]);
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}