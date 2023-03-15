#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9,}
    };
    int row =3;
    int clm =3;
    
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<clm;j++){
            sum+= arr[i][j];
        }
        cout<< sum << endl;
    }
    
    return 0;
}
