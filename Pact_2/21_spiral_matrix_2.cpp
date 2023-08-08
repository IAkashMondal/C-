#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> mat = {

        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };
    //    1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
    vector<int> ans;
    int left = 0;
    int top = 0;
    int right = mat.size() - 1;
    int bottom = mat[0].size() - 1;
    int row = mat.size();
    int clm = mat[0].size();
    int count = 0;
    int condition = count < row * clm;
    while (count < row * clm)
    {
        for (int i = left; i <= right && condition; i++)
        {
            ans.push_back(mat[top][i]);

            count++;
        }
        top++;
        for (int i = top; i <= bottom && condition; i++)
        {
            ans.push_back(mat[i][right]);

            count++;
        }
        right--;

        for (int i = right; i >= left && condition; i--)
        {
            ans.push_back(mat[bottom][i]);
            count++;
        }
        bottom--;
        for (int i = bottom; i >= top && condition; i--)
        {
            ans.push_back(mat[i][left]);
            count++;
        }
        left++;
    }

    for (auto value : ans)
    {
        cout << value << " ";
    }

    return 0;
}