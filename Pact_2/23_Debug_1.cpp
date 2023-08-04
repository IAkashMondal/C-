// 1. **The above code uses the Boyer-Moore Voting Algorithm to find the majority element in the given `vector`of integers. Majority element is that element which appears more than n/2 times. However, there is a bug in the code that causes it to return an incorrect result for some inputs. Your task is to identify and fix the bug.  Hint: Incomplete code.**
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}