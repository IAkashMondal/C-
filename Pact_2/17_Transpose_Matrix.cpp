#include <iostream>
#include <vector>
using namespace std;

void Transposematrix(int arr[][3], int r, int c, int TranposeArr[][3])
{ // With Swap function-------------->
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < i+1; j++) //i+1 to avoide swaping elements twice
    //     {
    //         swap(arr[i][j], arr[j][i]);
    //     }
    // }
    // With An Arr------------------>
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) // i+1 to avoide swaping elements twice
        {
            TranposeArr[i][j] = arr[j][i];
        }
    }
}
void PrintMatrix(int TranposeArr[][3], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << TranposeArr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int r = 3;
    int c = 3;
    int TranposeArr[3][3];
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Transposematrix(arr, r, c, TranposeArr);
    PrintMatrix(TranposeArr, r, c );

    cout << endl;
    return 0;
}