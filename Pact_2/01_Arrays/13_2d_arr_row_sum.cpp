#include <iostream>
#include <vector>
using namespace std;
void rowsum(int arr1[][3], int row, int clm)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < clm; j++)
        {
            sum += arr1[i][j];
        }
        cout <<"sum of row: "<<i<<" is: " << sum << " " << endl;
    }
}
int main()
{
    int row = 2;
    int clm = 3;
    int arr1[2][3];
    vector<int> ans;
    cout << "add values rowwise"<< endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clm; j++)
        {
            cin >> arr1[i][j];
        }
    }
    // caluculating row sum in this function called rowsum--------------->
    rowsum(arr1, row, clm);
    cout << endl;
    return 0;
}