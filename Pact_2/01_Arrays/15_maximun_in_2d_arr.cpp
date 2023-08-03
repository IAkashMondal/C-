#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row = 2;
    int col = 3;

    cout << "insert arr" << endl;

    int arr[2][3];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int s = 0; s < row; s++)
    {
        int max = INT32_MIN;
        for (int k = 0; k < col; k++)
        {
            if (arr[s][k] > max)
            {
                max = arr[s][k];
            }
        }

        cout << max << endl;
    }
    return 0;
}