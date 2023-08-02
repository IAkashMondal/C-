#include<iostream>
#include<vector>
using namespace std;

int main(){
int target =6;
int count=0;
vector<int>arr1={1,2,3,4,5};
for(int i=0;i<arr1.size();i++){
    for(int j=i+1;j<arr1.size();j++){
        if(arr1[i]+arr1[j] == target){
            count++;
        }
    }
}
// vector<int>ans;
cout <<count ;

cout<< endl;
return 0;
}