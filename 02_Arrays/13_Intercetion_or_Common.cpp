#include<iostream>
#include<vector>
using namespace std;
int main(){
   
    vector<int>arr1{1,2,3,4,5};
    vector<int>arr2{1,2,9,11,5};
    vector<int>ans ;
    for(int i=0; i<arr1.size();i++){
        int element = arr1[i];
        for(int j=0;j<arr2.size();j++){
           if(element== arr2[j]){
            ans.push_back(element);
           }
        }
    }
    for(auto value:ans){
        cout << value <<" ";
    }
    cout<< endl;
    return 0;
}
// Common elements in 2 array