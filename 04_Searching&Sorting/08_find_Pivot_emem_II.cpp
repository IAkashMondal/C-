#include<iostream>
#include<vector>
using namespace std;

int Find_Pivot_Elem(vector <int>arr){
    int start=0;
    int end= arr.size()-1;
    int mid = start+(end-start)/2;
    while (start<=end){
        if(arr[mid-1]>=0 && arr[mid]<arr[mid-1]){
            return mid;
        }
        else if(arr.size()-1  && arr[mid]>arr[mid+1]){
            return mid +1;
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
    vector <int>arr{3,4,7,1,2};
    int result = Find_Pivot_Elem(arr);
    
    if(result == -1){
         cout<<"Not Found"<<endl;
    }
    else{
        cout <<"found "<< arr[result]<<endl;
    }

     // Test cases
    cout << "Test Cases:" << endl;
    vector<vector<int>> test_cases = {
        {1, 2, 3, 4, 5}, // No pivot
        {1, 2, 3, 4, 0}, // Pivot at the end
        {5, 1, 2, 3, 4}, // Pivot at the beginning
        {4, 5, 1, 2, 3}, // Pivot in the middle
        {3, 4, 5, 1, 2}, // Pivot in the middle
        {2, 3, 4, 5, 1}, // Pivot in the middle
        {1, 0}, // Pivot at the beginning
        {0, 1}, // No pivot
        {0}, // No pivot
        {1} // No pivot
    };

    for (auto& tc : test_cases) {
        int result = Find_Pivot_Elem(tc);
        cout << "Array: ";
        for (auto& elem : tc) {
            cout << elem << " ";
        }
        if (result == -1) {
            cout << "=> No pivot element found." << endl;
        }
        else {
            cout << "=> Found pivot element: " << tc[result] << endl;
        }
    }

    return 0;
}