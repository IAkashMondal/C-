#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr1_size =5;
    int arr2[]={6,7,8,9,10,12};
    int arr2_size =6;

    vector<int>arr3;

    for(int i=0 ;i< arr1_size;i++){
        arr3.push_back(arr1[i]);
    }
    for(int i=0 ;i< arr2_size;i++){
        arr3.push_back(arr2[i]);
    }
    for(int i=0;i<arr3.size();i++){
        cout<< arr3[i]<<" ";
    }

    return 0;
}