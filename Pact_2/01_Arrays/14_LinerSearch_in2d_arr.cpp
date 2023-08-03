#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row = 2;
    int col = 3;
    int target;
    bool  found = false;

    cout << "insert Target" << endl;
    cin >> target;
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

        for (int k = 0; k < col; k++)
        {
            if (target == arr[s][k])
            {
                cout << "Target Foun: " << target << " on row: " << s <<" & "<<"col: "<< k << endl;
                found= true;
                break;
            }
        }
    }
    if(!found){
        cout<<"Target not found"<<endl;
    }

    cout << endl;
    return 0;
}