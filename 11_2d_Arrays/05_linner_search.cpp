#include <iostream>
using namespace std;

bool LinnerSearch(int arr[][3], int row, int clm, int key, int& row_index, int& clm_index) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < clm; j++) {
            if(arr[i][j] == key) {
                row_index = i;
                clm_index = j;
                return true;
            };
        }
    }
    return false;
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int row = 3;
    int clm = 3;
    int key;
    cout<< "Enter number you want to find "<<endl;
    cin>> key;
    int row_index, clm_index;

    if(LinnerSearch(arr, row, clm, key, row_index, clm_index)) {
        cout << "Element found at index [" << row_index << "][" << clm_index << "]" << endl;
    }
    else {
        cout << "Element not found: " <<(LinnerSearch(arr, row, clm, key, row_index, clm_index)) << endl;
    }

    return 0;
}
// we can acess row_index, clm_index because we pass by refarance, which is &
// if we dont use & then it will give us garbage value