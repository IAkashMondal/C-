#include<iostream>
using namespace std ;
int main(){
        int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    int numRows = sizeof(arr) / sizeof(arr[0]);     // number of rows
    int numCols = sizeof(arr[0]) / sizeof(int);     // number of columns

    cout << "Number of rows: " << numRows << endl;
    cout << "Number of columns: " << numCols << endl;

   return 0;
}