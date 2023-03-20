// Leet Code: https://leetcode.com/problems/peak-index-in-a-mountain-array/
// Question no:852;
// Peak Index in a Mountain Array

#include<iostream>
#include<vector>
using namespace std;

int Peake_Elem_In_Mountain_Arr(vector<int>arr){
    int ans= -1;
    int start =0;
    int end =arr.size()-1;
    int mid =start+(end-start)/2;
    while (start<end)
    {
        if(arr[mid]<arr[mid+1]){
            start =mid+1;
        }
        else{
            end= mid;
            ans =arr[mid];
        }
        mid= start+(end-start)/2;
    }
    // return end;
    return ans;
    
}
int main(){

    vector<int>arr{0,3,10,5,2};
    cout<<  Peake_Elem_In_Mountain_Arr(arr)<< endl;
    return 0;
}