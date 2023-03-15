#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int row =3;
    cout <<"Add element to matrix 3x3 ---------------->"<< endl;
    int clm =3;
    for(int i=0;i<row;i++){
        for(int j=0;j<clm;j++){
            cin>> arr[i][j];
        }
    }
    cout <<"Printing Row wise------------------------>"<< endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<clm;j++){
            cout<< arr[i][j]<<" ";
            
        }
        cout << endl;
    }
    
    return 0;
}
