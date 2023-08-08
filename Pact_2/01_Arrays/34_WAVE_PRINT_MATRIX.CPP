#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> arr1 = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 0}, {11, 12, 13, 14, 15}};
    vector<int> ans;
    int Row = arr1.size();
    int col = arr1[0].size();

    for (int i = 0; i < col; i++)
    {
        if ((i & 1) == 0)
        { // even with bitwise opretors
            for (int j = 0; j < Row; j++)
            {
                cout << arr1[j][i] << " ";
            }
        }
        else
        {
            for (int j = Row - 1; j >= 0; j--)
            {
                cout << arr1[j][i] << " ";
            }
        }
    }

    cout << endl;
    return 0;
}