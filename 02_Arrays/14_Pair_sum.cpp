#include<iostream>
#include<vector>
using namespace std;

// a+b =k

int main(){

    int k;
    cout<<"add target value"<<endl;
    cin >>k;
    vector<int>arr1{1,2,3,4,5};
    vector<int>ans;

    for(int i =0;i<arr1.size();i++){
        for(int j = i+1;i<arr1.size();j++){
            if((arr1[i]+arr1[j]) ==k){
                cout <<arr1[i] << arr1[j]<<" " ;
                ans.push_back((arr1[i],arr1[j]));
            }
        }
    }
    for(auto value:ans){
        cout<< value <<" ";
    }
    cout<< endl;
    return 0;
}