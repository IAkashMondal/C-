#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int BinarySearch(int arr[],int n, int target){
    int left =0;
    int right= n-1;
    int mid =left+(right-left)/2;
    while(left<=right){
        int elem =arr[mid];
        if(elem == target){
            return mid;
        }
        else if(target< elem){
            // search in left side-------------------->
            right=mid-1;
        }
        else{
            // search in right side-------------------->
            left=mid+1;
        }
         mid = left+(right-left)/2;
    }

    return -1;
}
int main(){

    int target;
    cout<<"Enter Tagert Value"<<endl;
    cin >> target;
    int arr[]={1,3,5,7,9,11,14,17,29,20};
     vector <int>arr1{1,3,5,7,9,11,14,17,29,20};
    int n = sizeof(arr) / sizeof(arr[0]);
     int result = BinarySearch(arr, n, target);

    if (result == -1) {
        cout << "Target not found in array." << endl;
    } else {
        cout << "Target found at index " << result << endl;
    }
//  c++ method------------>
    if(binary_search (arr1.begin(), arr1.end(), target)){
        cout <<"Found in Vector " <<target<<endl;
    }
    else{
        cout<<"Not Found in vector"<<endl;
    }
//  with out vector----------------- pointers need--------------->
     if(binary_search (arr, arr+n, target)){
        cout <<"Found in arr " <<target<<endl;
    }
    else{
        cout<<"Not Found in arr"<<endl;
    }
    return 0;
}