#include <iostream>
using namespace std;
// row to clm 
void TransPose(int arr[][3], int row, int clm) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < i+1; j++) {
           swap(arr[i][j],arr[j][i]);
        }
    }

}
void printArr(int arr[][3], int row, int clm){
      for(int i = 0; i < row; i++) {
        for(int j = 0; j < clm; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int row = 3;
    int clm = 3;

      TransPose(arr, row, clm);
        printArr(arr,row,clm);
   

    return 0;
}
