#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>arr1{1,2,3,4,5};
vector<int>ans;
int size =arr1.size()-1;
for(int i= size; i>=0;i--){
    cout <<arr1[i]<<" ";
}

cout<< endl;
return 0;
}