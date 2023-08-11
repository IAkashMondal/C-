#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{0, 10, 5, 2};
    int start = 0;
    int end = arr.size();
    int mid = start + (start + end) / 2;
    int ans;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start=mid+1;
        }else{
            end= mid+1;
        }
        mid =(start+end)/2;
    }

    cout << start<<endl;
    return 0;
}