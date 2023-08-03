#include <iostream>
#include <vector>
using namespace std;

void RotateBy90DegreCounterClockWise(int arr[][3], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = i+1; j < c; j++) // Use j = i + 1 to avoid swapping elements twice.
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // reverse the colum------------->
    for (int i = 0; i < r; i++)
    {
        int start = 0;
        int end = c - 1;
        while (start < end)
        {
            int temp = arr[start][i];
            arr[start][i] = arr[end][i];
            arr[end][i] = temp;
            start++;
            end--;
        }
    }
}
void PrintMatrix(int arr[][3], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int r = 3;
    int c = 3;

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    RotateBy90DegreCounterClockWise(arr, r, c);
    PrintMatrix(arr, r, c);

    cout << endl;
    return 0;
}