#include <iostream>
#include<limits.h>
using namespace std;

int MinMax(int arr[][3], int row, int clm, int min, int max) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < clm; j++) {
            // min
            if(arr[i][j]<min ) {
                min =arr[i][j];
            };
            // max
            if(arr[i][j]>max ) {
                max =arr[i][j];
            };
            
            
        }
    }
    cout << "Min element: " << min << endl;
    cout << "Max element: " << max << endl;
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, -6},
        {7, 18, 9}
    };
    int row = 3;
    int clm = 3;

    int min =INT_MAX ;
    int max =INT_MIN;

    MinMax(arr, row, clm, min, max) ;
    
    return 0;
}
