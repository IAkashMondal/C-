#include <iostream>
#include <vector>

using namespace std;

int MoveAllNagative(vector<int> &nums)
{
    int low = 0, high = nums.size() - 1;
    while (low < high)
    {
        if (nums[low] < 0)
        {
            low++;
        }
        else if (nums[high] >= 0)
        {
            high--;
        }
        else{
            swap(nums[low],nums[high]);
        }
    }
}

int main()
{
    vector<int> nums = {6, 3, -1, 2, -3, -12, -2, 4, 32};
    MoveAllNagative(nums);

    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}