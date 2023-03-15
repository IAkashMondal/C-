#include<iostream>
using namespace std;
void  SumClmWise(int arr[][3],int row,int clm){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<clm;j++){
            sum+= arr[j][i];
        }
        cout<< sum << endl;
    }
}
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9,}
    };
    int row =3;
    int clm =3;
    
     SumClmWise(arr,row,clm);

    return 0;
}
