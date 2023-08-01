#include<iostream>
#include<vector>
using namespace std;
 
 vector <int> IntersectionArr(vector<int> arr1,vector<int> arr2){
    vector<int> ans;
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
            }
        }
    }
    return ans;
 }
int main(){

vector<int>arr1={1,2,3,4,5,14};
vector<int>arr2={1,2,11,4,5};
vector<int>ans;
vector<int> res = IntersectionArr(arr1,arr2);
for(auto value :res){
cout <<value <<" ";
}
cout<< endl;
return 0;
}