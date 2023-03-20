#include<iostream>
#include<vector>
using namespace std;

int Last_Occurance(vector <int>arr, int target){
    int start=0;
    int end= arr.size()-1;
    int mid = start+(end-start)/2;
    int ans=-1;
    while (start<=end){
        if(target== arr[mid]){
            ans=mid;
            start =mid+1;
        }
        else if(target < arr[mid]){
           end= mid-1; 
        }
        else if(target >arr[mid]){
            start= mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
    
}

int main(){
    int target;
    cout<<"Enter Target: "<< endl;
    cin >> target;
    vector <int>arr{1,2,3,4,4,4,4,4,5,6,7};
    int result = Last_Occurance(arr,target);
    
    if(result == -1){
         cout<<"Not Found"<<endl;
    }
    else{
        cout <<"found"<<result<<endl;
    }

    return 0;
}