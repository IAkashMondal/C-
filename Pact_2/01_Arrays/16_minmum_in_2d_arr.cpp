#include <iostream>
#include <vector>
using namespace std;
void FindMinimum(int arr[][3],int row,int col){
    for (int s = 0; s < row; s++)
    {
        int min = INT32_MAX;
        for (int k = 0; k < col; k++)
        {
            if (arr[s][k]<min)
            {
                min = arr[s][k];
            }
        }

        cout << min << endl;
    }
}
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
    FindMinimum(arr,row,col);
    return 0;
}