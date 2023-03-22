#include<iostream>
#include<vector>
using namespace std;

int Find_Pivot_Elem(vector <int>arr){
    int start=0;
    int end= arr.size()-1;
    int mid = start+(end-start)/2;
    while (start<=end){
        if(arr.size()-1 && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if( arr[mid-1]>=0 && arr[mid-1]>arr[mid]){
            return mid -1;
        }
        else if(arr[start]>= arr[mid]){
            end =mid-1;
        }
        else if(arr[start]< arr[mid]){
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
    
}

int main(){
    cout<<"Consideing Piviot : 7----------------------------------------> "<< endl;
    vector <int>arr{11,1,2,3,4,7,};
    int result = Find_Pivot_Elem(arr);
    
    if(result == -1){
         cout<<"Not Found"<<endl;
    }
    else{
        cout <<"found "<< arr[result]<<endl;
    }

    return 0;
}